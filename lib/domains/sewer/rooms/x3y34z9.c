inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 9 }));
  set_short( "Passage - x3y34z9" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y34z9.c",
  "north" : DIR+"/rooms/x3y35z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
