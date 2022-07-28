inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 5 }));
  set_short( "Hallway - x51y10z5" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y10z5.c",
  "east" : DIR+"/rooms/x52y10z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
