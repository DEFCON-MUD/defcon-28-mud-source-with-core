inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 1 }));
  set_short( "Hallway - x28y0z1" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z1.c",
  "east" : DIR+"/rooms/x29y0z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
