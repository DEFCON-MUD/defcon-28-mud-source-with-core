inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 2, 3 }));
  set_short( "Corridor - x54y2z3" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y2z3.c",
  "east" : DIR+"/rooms/x55y2z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
