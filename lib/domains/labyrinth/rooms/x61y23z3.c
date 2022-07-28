inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 3 }));
  set_short( "Corridor - x61y23z3" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z3.c",
  "south" : DIR+"/rooms/x61y22z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
