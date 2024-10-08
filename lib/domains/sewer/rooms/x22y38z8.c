inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 38, 8 }));
  set_short( "Corridor - x22y38z8" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y38z8.c",
  "east" : DIR+"/rooms/x23y38z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
