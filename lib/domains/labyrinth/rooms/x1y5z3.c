inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 3 }));
  set_short( "Hallway - x1y5z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z3.c",
  "south" : DIR+"/rooms/x1y4z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
