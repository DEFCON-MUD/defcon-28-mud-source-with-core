inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 0 }));
  set_short( "Hallway - x61y64z0" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z0.c",
  "south" : DIR+"/rooms/x61y63z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
