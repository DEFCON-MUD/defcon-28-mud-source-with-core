inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 0 }));
  set_short( "Passage - x27y30z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y30z0.c",
  "east" : DIR+"/rooms/x28y30z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
