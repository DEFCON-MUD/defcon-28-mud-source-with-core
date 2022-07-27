inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 16, 6 }));
  set_short( "Corridor - x26y16z6" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y16z6.c",
  "east" : DIR+"/rooms/x27y16z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
