inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 1 }));
  set_short( "Hallway - x3y4z1" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y4z1.c",
  "north" : DIR+"/rooms/x3y5z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
