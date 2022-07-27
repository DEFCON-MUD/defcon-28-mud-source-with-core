inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 3 }));
  set_short( "Passage - x5y4z3" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y4z3.c",
  "north" : DIR+"/rooms/x5y5z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
