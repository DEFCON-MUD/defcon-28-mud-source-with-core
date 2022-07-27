inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 29, 4 }));
  set_short( "Passage - x5y29z4" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y30z4.c",
  "south" : DIR+"/rooms/x5y28z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
