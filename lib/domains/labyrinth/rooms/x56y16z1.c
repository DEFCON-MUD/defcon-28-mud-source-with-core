inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 16, 1 }));
  set_short( "Hallway - x56y16z1" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y16z1.c",
  "east" : DIR+"/rooms/x57y16z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
