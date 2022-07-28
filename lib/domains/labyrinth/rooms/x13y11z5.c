inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 11, 5 }));
  set_short( "Corridor - x13y11z5" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y12z5.c",
  "south" : DIR+"/rooms/x13y10z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
