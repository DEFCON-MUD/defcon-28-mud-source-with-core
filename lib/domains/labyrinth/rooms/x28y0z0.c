inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 0 }));
  set_short( "Passage - x28y0z0" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z0.c",
  "east" : DIR+"/rooms/x29y0z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
