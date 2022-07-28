inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 27, 4 }));
  set_short( "Corridor - x27y27z4" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y28z4.c",
  "south" : DIR+"/rooms/x27y26z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
