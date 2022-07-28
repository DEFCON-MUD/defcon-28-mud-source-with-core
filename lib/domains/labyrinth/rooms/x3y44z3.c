inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 44, 3 }));
  set_short( "Corridor - x3y44z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y44z3.c",
  "east" : DIR+"/rooms/x4y44z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
