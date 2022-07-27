inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 28, 1 }));
  set_short( "Corridor - x11y28z1" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y29z1.c",
  "south" : DIR+"/rooms/x11y27z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
