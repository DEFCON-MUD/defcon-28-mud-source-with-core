inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 39, 4 }));
  set_short( "Passage - x9y39z4" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y40z4.c",
  "south" : DIR+"/rooms/x9y38z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
