inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 8 }));
  set_short( "Corridor - x1y30z8" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y30z8.c",
  "north" : DIR+"/rooms/x1y31z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
