inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 1 }));
  set_short( "Hallway - x1y38z1" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z1.c",
  "north" : DIR+"/rooms/x1y39z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
