inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 2, 1 }));
  set_short( "Passage - x26y2z1" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y2z1.c",
  "east" : DIR+"/rooms/x27y2z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
