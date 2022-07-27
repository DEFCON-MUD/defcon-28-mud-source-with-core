inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 0 }));
  set_short( "Corridor - x35y42z0" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z0.c",
  "north" : DIR+"/rooms/x35y43z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
