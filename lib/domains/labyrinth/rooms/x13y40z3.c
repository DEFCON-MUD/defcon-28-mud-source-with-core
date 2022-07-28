inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 3 }));
  set_short( "Passage - x13y40z3" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z3.c",
  "south" : DIR+"/rooms/x13y39z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
