inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 56, 0 }));
  set_short( "Hallway - x26y56z0" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y56z0.c",
  "east" : DIR+"/rooms/x27y56z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
