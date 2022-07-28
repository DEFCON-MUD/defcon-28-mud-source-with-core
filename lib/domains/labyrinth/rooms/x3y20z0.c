inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 0 }));
  set_short( "Hallway - x3y20z0" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y20z0.c",
  "north" : DIR+"/rooms/x3y21z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
