inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 58, 0 }));
  set_short( "Hallway - x52y58z0" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y58z0.c",
  "east" : DIR+"/rooms/x53y58z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
