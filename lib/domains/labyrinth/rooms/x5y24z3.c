inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 3 }));
  set_short( "Hallway - x5y24z3" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y25z3.c",
  "south" : DIR+"/rooms/x5y23z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
