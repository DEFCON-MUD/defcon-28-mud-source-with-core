inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 22, 5 }));
  set_short( "Hallway - x2y22z5" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y22z5.c",
  "east" : DIR+"/rooms/x3y22z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
