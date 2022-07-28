inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 4, 3 }));
  set_short( "Hallway - x34y4z3" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y4z3.c",
  "east" : DIR+"/rooms/x35y4z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
