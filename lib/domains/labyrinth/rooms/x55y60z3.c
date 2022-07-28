inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 3 }));
  set_short( "Hallway - x55y60z3" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y60z3.c",
  "east" : DIR+"/rooms/x56y60z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
