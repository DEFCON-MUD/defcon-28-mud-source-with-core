inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 42, 1 }));
  set_short( "Hallway - x40y42z1" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y42z1.c",
  "east" : DIR+"/rooms/x41y42z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
