inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 17, 3 }));
  set_short( "Passage - x39y17z3" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y18z3.c",
  "south" : DIR+"/rooms/x39y16z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
