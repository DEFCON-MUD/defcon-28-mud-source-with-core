inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 20, 3 }));
  set_short( "Corridor - x60y20z3" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y20z3.c",
  "east" : DIR+"/rooms/x61y20z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
