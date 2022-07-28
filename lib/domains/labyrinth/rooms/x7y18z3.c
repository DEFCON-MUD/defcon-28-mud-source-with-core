inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 3 }));
  set_short( "Passage - x7y18z3" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y18z3.c",
  "north" : DIR+"/rooms/x7y19z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
