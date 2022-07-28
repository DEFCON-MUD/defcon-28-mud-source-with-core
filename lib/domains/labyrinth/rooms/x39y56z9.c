inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 56, 9 }));
  set_short( "Passage - x39y56z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y56z9.c",
  "north" : DIR+"/rooms/x39y57z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
