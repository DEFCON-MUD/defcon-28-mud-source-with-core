inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 57, 1 }));
  set_short( "Hallway - x9y57z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y58z1.c",
  "south" : DIR+"/rooms/x9y56z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
