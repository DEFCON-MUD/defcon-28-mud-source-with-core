inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 3 }));
  set_short( "Hallway - x39y46z3" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y46z3.c",
  "north" : DIR+"/rooms/x39y47z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
