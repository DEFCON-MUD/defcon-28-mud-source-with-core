inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 1 }));
  set_short( "Passage - x35y64z1" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z1.c",
  "east" : DIR+"/rooms/x36y64z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
