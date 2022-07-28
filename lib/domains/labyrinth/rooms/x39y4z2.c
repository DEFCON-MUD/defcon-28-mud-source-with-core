inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 2 }));
  set_short( "Corridor - x39y4z2" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y4z2.c",
  "east" : DIR+"/rooms/x40y4z2.c",
  "south" : DIR+"/rooms/x39y3z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
