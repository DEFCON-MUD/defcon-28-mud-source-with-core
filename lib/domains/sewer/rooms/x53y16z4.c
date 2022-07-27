inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 4 }));
  set_short( "Corridor - x53y16z4" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y16z4.c",
  "north" : DIR+"/rooms/x53y17z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
