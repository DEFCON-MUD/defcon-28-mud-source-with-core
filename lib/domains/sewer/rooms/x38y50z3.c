inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 50, 3 }));
  set_short( "Hallway - x38y50z3" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y50z3.c",
  "east" : DIR+"/rooms/x39y50z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
