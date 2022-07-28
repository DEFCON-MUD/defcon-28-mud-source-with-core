inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 2 }));
  set_short( "Passage - x31y16z2" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "south" : DIR+"/rooms/x31y15z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
