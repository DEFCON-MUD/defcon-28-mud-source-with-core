inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 64, 3 }));
  set_short( "Hallway - x25y64z3" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y64z3.c",
  "east" : DIR+"/rooms/x26y64z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
