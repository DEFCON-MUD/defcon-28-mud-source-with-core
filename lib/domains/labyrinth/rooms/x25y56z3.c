inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 56, 3 }));
  set_short( "Corridor - x25y56z3" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y56z3.c",
  "north" : DIR+"/rooms/x25y57z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
