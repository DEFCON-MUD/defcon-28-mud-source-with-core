inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 0 }));
  set_short( "Hallway - x53y46z0" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y46z0.c",
  "north" : DIR+"/rooms/x53y47z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
