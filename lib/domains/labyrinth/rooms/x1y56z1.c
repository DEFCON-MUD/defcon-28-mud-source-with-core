inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 1 }));
  set_short( "Hallway - x1y56z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y57z1.c",
  "south" : DIR+"/rooms/x1y55z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
