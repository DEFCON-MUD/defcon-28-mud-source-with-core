inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 3 }));
  set_short( "Hallway - x55y14z3" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y14z3.c",
  "north" : DIR+"/rooms/x55y15z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
