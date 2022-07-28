inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 30, 5 }));
  set_short( "Passage - x35y30z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y31z5.c",
  "south" : DIR+"/rooms/x35y29z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
