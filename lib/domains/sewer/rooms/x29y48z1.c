inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 1 }));
  set_short( "Hallway - x29y48z1" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y48z1.c",
  "north" : DIR+"/rooms/x29y49z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
