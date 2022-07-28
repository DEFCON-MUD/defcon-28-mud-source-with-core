inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 3 }));
  set_short( "Corridor - x37y38z3" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y38z3.c",
  "east" : DIR+"/rooms/x38y38z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
