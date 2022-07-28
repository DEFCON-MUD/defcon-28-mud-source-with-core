inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 4, 4 }));
  set_short( "Corridor - x60y4z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y4z4.c",
  "east" : DIR+"/rooms/x61y4z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
