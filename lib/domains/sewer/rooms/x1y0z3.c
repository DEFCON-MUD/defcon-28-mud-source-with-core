inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 3 }));
  set_short( "Corridor - x1y0z3" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
