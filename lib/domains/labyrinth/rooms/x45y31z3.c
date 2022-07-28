inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 31, 3 }));
  set_short( "Corridor - x45y31z3" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y32z3.c",
  "south" : DIR+"/rooms/x45y30z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
