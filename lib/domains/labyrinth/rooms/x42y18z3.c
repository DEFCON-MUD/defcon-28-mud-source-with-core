inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 18, 3 }));
  set_short( "Corridor - x42y18z3" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y18z3.c",
  "east" : DIR+"/rooms/x43y18z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
