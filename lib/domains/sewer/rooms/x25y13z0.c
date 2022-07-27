inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 0 }));
  set_short( "Corridor - x25y13z0" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z0.c",
  "south" : DIR+"/rooms/x25y12z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
