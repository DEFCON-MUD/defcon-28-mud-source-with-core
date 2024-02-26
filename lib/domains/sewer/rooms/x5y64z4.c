inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 64, 4 }));
  set_short( "Hallway - x5y64z4" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y64z4.c",
  "east" : DIR+"/rooms/x6y64z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
