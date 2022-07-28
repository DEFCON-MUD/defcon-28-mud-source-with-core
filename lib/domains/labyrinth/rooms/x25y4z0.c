inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 0 }));
  set_short( "Corridor - x25y4z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y4z0.c",
  "north" : DIR+"/rooms/x25y5z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
