inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 3 }));
  set_short( "Passage - x9y62z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y62z3.c",
  "east" : DIR+"/rooms/x10y62z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
