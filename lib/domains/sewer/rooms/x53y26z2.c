inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 26, 2 }));
  set_short( "Hallway - x53y26z2" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "south" : DIR+"/rooms/x53y25z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
