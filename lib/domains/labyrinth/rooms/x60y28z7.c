inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 28, 7 }));
  set_short( "Passage - x60y28z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y28z7.c",
  "east" : DIR+"/rooms/x61y28z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
