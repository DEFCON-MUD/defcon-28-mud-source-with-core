inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 3 }));
  set_short( "Passage - x25y40z3" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y40z3.c",
  "east" : DIR+"/rooms/x26y40z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
