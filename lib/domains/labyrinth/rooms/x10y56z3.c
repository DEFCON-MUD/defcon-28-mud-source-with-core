inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 56, 3 }));
  set_short( "Passage - x10y56z3" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y56z3.c",
  "east" : DIR+"/rooms/x11y56z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
