inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 3 }));
  set_short( "Hallway - x9y38z3" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y39z3.c",
  "south" : DIR+"/rooms/x9y37z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
