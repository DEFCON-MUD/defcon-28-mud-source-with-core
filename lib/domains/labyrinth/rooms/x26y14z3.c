inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 14, 3 }));
  set_short( "Corridor - x26y14z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y14z3.c",
  "east" : DIR+"/rooms/x27y14z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
