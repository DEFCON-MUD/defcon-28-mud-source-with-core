inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 20, 3 }));
  set_short( "Corridor - x4y20z3" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y20z3.c",
  "east" : DIR+"/rooms/x5y20z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
