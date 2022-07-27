inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 8, 7 }));
  set_short( "Passage - x61y8z7" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y8z7.c",
  "north" : DIR+"/rooms/x61y9z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
