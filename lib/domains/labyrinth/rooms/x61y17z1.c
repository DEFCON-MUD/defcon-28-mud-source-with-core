inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 17, 1 }));
  set_short( "Hallway - x61y17z1" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y18z1.c",
  "south" : DIR+"/rooms/x61y16z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
