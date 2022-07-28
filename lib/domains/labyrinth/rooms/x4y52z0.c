inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 52, 0 }));
  set_short( "Hallway - x4y52z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y52z0.c",
  "east" : DIR+"/rooms/x5y52z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
