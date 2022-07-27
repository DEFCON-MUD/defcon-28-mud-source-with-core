inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 46, 2 }));
  set_short( "Passage - x59y46z2" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y46z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
