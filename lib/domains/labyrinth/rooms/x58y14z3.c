inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 3 }));
  set_short( "Passage - x58y14z3" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z3.c",
  "east" : DIR+"/rooms/x59y14z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
