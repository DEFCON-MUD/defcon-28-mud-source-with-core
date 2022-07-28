inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 27, 8 }));
  set_short( "Passage - x21y27z8" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y28z8.c",
  "south" : DIR+"/rooms/x21y26z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
