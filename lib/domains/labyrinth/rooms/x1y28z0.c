inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 0 }));
  set_short( "Corridor - x1y28z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z0.c",
  "north" : DIR+"/rooms/x1y29z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
