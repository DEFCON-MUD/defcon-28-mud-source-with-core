inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 3 }));
  set_short( "Passage - x31y64z3" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z3.c",
  "east" : DIR+"/rooms/x32y64z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
