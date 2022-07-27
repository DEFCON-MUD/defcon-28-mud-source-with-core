inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 5 }));
  set_short( "Passage - x55y32z5" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y32z5.c",
  "south" : DIR+"/rooms/x55y31z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
