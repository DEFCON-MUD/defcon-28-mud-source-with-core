inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 38, 3 }));
  set_short( "Corridor - x59y38z3" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y38z3.c",
  "east" : DIR+"/rooms/x60y38z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
