inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 15, 3 }));
  set_short( "Passage - x1y15z3" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y16z3.c",
  "south" : DIR+"/rooms/x1y14z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
