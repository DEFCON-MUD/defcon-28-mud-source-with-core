inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 3 }));
  set_short( "Hallway - x11y30z3" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y30z3.c",
  "north" : DIR+"/rooms/x11y31z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
