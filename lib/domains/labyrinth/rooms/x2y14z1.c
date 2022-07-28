inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 14, 1 }));
  set_short( "Passage - x2y14z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y14z1.c",
  "east" : DIR+"/rooms/x3y14z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
