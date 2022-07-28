inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 20, 9 }));
  set_short( "Passage - x60y20z9" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y20z9.c",
  "east" : DIR+"/rooms/x61y20z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
