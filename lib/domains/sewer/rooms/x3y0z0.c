inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 0 }));
  set_short( "Hallway - x3y0z0" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z0.c",
  "east" : DIR+"/rooms/x4y0z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
