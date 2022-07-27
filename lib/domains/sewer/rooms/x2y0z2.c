inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 0, 2 }));
  set_short( "Hallway - x2y0z2" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y0z2.c",
  "east" : DIR+"/rooms/x3y0z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
