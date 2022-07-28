inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 3 }));
  set_short( "Corridor - x23y46z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y46z3.c",
  "east" : DIR+"/rooms/x24y46z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
