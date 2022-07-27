inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 4 }));
  set_short( "Hallway - x1y50z4" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y51z4.c",
  "south" : DIR+"/rooms/x1y49z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
