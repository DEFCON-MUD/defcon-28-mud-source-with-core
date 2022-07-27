inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 18, 8 }));
  set_short( "Corridor - x26y18z8" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y18z8.c",
  "east" : DIR+"/rooms/x27y18z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
