inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 2 }));
  set_short( "Corridor - x9y56z2" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y56z2.c",
  "north" : DIR+"/rooms/x9y57z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
