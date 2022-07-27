inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 3 }));
  set_short( "Passage - x25y30z3" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y30z3.c",
  "east" : DIR+"/rooms/x26y30z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
