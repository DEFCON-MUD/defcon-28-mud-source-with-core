inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 24, 0 }));
  set_short( "Corridor - x60y24z0" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y24z0.c",
  "east" : DIR+"/rooms/x61y24z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
