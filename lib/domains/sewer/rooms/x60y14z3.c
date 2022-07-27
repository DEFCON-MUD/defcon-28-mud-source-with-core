inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 14, 3 }));
  set_short( "Passage - x60y14z3" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y14z3.c",
  "east" : DIR+"/rooms/x61y14z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
