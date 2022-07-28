inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 64, 3 }));
  set_short( "Corridor - x15y64z3" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y64z3.c",
  "east" : DIR+"/rooms/x16y64z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
