inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 18, 5 }));
  set_short( "Corridor - x3y18z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y18z5.c",
  "north" : DIR+"/rooms/x3y19z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
