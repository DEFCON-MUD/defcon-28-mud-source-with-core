inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 7 }));
  set_short( "Passage - x9y30z7" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y30z7.c",
  "north" : DIR+"/rooms/x9y31z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
