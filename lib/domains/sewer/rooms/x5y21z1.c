inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 21, 1 }));
  set_short( "Passage - x5y21z1" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y22z1.c",
  "south" : DIR+"/rooms/x5y20z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
