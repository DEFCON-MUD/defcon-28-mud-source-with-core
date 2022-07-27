inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 19, 3 }));
  set_short( "Passage - x35y19z3" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y20z3.c",
  "south" : DIR+"/rooms/x35y18z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
