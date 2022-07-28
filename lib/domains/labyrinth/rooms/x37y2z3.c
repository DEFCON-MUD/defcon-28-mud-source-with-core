inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 3 }));
  set_short( "Passage - x37y2z3" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y2z3.c",
  "east" : DIR+"/rooms/x38y2z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
