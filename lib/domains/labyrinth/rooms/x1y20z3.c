inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 3 }));
  set_short( "Hallway - x1y20z3" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y20z3.c",
  "north" : DIR+"/rooms/x1y21z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
