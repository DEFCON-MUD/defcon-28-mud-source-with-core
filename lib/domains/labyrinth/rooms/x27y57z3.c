inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 57, 3 }));
  set_short( "Corridor - x27y57z3" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y58z3.c",
  "south" : DIR+"/rooms/x27y56z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
