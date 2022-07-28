inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 28, 3 }));
  set_short( "Passage - x12y28z3" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y28z3.c",
  "east" : DIR+"/rooms/x13y28z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
