inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 32, 3 }));
  set_short( "Passage - x1y32z3" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y32z3.c",
  "north" : DIR+"/rooms/x1y33z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
