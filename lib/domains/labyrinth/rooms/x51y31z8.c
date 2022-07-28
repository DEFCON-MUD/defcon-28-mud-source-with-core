inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 31, 8 }));
  set_short( "Passage - x51y31z8" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y32z8.c",
  "south" : DIR+"/rooms/x51y30z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
