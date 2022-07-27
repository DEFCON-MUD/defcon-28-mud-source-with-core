inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 16, 7 }));
  set_short( "Passage - x12y16z7" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y16z7.c",
  "east" : DIR+"/rooms/x13y16z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
