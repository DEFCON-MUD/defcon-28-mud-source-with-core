inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 3 }));
  set_short( "Corridor - x25y32z3" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y32z3.c",
  "north" : DIR+"/rooms/x25y33z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
