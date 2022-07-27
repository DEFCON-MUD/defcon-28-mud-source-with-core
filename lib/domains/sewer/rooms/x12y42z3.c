inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 42, 3 }));
  set_short( "Passage - x12y42z3" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y42z3.c",
  "east" : DIR+"/rooms/x13y42z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
