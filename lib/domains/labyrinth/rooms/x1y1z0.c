inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 1, 0 }));
  set_short( "Corridor - x1y1z0" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y2z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
