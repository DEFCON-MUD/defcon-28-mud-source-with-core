inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 0 }));
  set_short( "Corridor - x21y64z0" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z0.c",
  "east" : DIR+"/rooms/x22y64z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
