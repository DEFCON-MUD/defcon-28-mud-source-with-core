inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 0, 8 }));
  set_short( "Corridor - x59y0z8" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y0z8.c",
  "east" : DIR+"/rooms/x60y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
