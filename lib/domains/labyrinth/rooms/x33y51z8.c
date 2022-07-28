inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 51, 8 }));
  set_short( "Passage - x33y51z8" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y52z8.c",
  "south" : DIR+"/rooms/x33y50z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
