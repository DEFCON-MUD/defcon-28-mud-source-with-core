inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 38, 4 }));
  set_short( "Corridor - x4y38z4" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y38z4.c",
  "east" : DIR+"/rooms/x5y38z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
