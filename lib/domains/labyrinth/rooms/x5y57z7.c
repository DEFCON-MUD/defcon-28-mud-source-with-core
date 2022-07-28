inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 57, 7 }));
  set_short( "Hallway - x5y57z7" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y58z7.c",
  "south" : DIR+"/rooms/x5y56z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
