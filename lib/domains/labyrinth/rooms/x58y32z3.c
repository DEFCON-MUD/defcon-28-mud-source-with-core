inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 32, 3 }));
  set_short( "Passage - x58y32z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y32z3.c",
  "east" : DIR+"/rooms/x59y32z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
