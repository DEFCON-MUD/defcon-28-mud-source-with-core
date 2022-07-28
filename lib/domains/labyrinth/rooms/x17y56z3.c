inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 3 }));
  set_short( "Hallway - x17y56z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y57z3.c",
  "south" : DIR+"/rooms/x17y55z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
