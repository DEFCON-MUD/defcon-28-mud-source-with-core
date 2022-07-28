inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 0 }));
  set_short( "Passage - x1y12z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y12z0.c",
  "north" : DIR+"/rooms/x1y13z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
