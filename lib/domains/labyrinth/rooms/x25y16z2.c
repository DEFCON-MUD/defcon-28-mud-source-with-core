inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 2 }));
  set_short( "Hallway - x25y16z2" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y16z2.c",
  "north" : DIR+"/rooms/x25y17z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
