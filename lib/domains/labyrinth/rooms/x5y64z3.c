inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 64, 3 }));
  set_short( "Corridor - x5y64z3" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y64z3.c",
  "east" : DIR+"/rooms/x6y64z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
