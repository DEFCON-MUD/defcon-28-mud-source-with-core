inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 28, 0 }));
  set_short( "Corridor - x2y28z0" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y28z0.c",
  "east" : DIR+"/rooms/x3y28z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
