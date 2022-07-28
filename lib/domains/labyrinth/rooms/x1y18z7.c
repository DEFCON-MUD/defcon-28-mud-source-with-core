inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 7 }));
  set_short( "Corridor - x1y18z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z7.c",
  "south" : DIR+"/rooms/x1y17z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
