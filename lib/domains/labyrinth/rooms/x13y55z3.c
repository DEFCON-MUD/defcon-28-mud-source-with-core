inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 55, 3 }));
  set_short( "Passage - x13y55z3" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y56z3.c",
  "south" : DIR+"/rooms/x13y54z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
