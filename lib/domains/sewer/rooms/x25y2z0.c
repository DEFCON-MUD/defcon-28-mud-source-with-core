inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 0 }));
  set_short( "Hallway - x25y2z0" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y2z0.c",
  "east" : DIR+"/rooms/x26y2z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
