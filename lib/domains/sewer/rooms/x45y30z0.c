inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 0 }));
  set_short( "Hallway - x45y30z0" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y30z0.c",
  "south" : DIR+"/rooms/x45y29z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
