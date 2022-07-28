inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 8 }));
  set_short( "Hallway - x25y30z8" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y30z8.c",
  "east" : DIR+"/rooms/x26y30z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
