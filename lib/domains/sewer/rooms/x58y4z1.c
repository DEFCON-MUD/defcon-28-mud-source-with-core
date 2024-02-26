inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 4, 1 }));
  set_short( "Corridor - x58y4z1" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y4z1.c",
  "east" : DIR+"/rooms/x59y4z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
