inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 2 }));
  set_short( "Hallway - x3y4z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y4z2.c",
  "east" : DIR+"/rooms/x4y4z2.c",
  "north" : DIR+"/rooms/x3y5z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
