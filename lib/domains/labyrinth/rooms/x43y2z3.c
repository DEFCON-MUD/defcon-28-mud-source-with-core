inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 3 }));
  set_short( "Corridor - x43y2z3" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y2z3.c",
  "north" : DIR+"/rooms/x43y3z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
