inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 0, 6 }));
  set_short( "Passage - x26y0z6" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y0z6.c",
  "east" : DIR+"/rooms/x27y0z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
