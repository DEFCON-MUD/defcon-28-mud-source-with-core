inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 2 }));
  set_short( "Passage - x25y48z2" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y48z2.c",
  "south" : DIR+"/rooms/x25y47z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
