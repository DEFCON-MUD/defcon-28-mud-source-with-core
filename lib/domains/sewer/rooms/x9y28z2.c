inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 2 }));
  set_short( "Passage - x9y28z2" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y28z2.c",
  "north" : DIR+"/rooms/x9y29z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
