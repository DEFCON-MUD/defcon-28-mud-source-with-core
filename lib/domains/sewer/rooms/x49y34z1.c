inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 1 }));
  set_short( "Hallway - x49y34z1" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y34z1.c",
  "north" : DIR+"/rooms/x49y35z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
