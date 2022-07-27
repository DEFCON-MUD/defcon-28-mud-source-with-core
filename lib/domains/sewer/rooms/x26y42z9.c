inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 42, 9 }));
  set_short( "Passage - x26y42z9" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y42z9.c",
  "east" : DIR+"/rooms/x27y42z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
