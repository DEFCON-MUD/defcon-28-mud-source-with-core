inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 27, 3 }));
  set_short( "Hallway - x25y27z3" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y28z3.c",
  "south" : DIR+"/rooms/x25y26z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
