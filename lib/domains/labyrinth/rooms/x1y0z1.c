inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 1 }));
  set_short( "Hallway - x1y0z1" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
