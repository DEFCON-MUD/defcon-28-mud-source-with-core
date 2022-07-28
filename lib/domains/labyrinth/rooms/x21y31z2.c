inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 31, 2 }));
  set_short( "Corridor - x21y31z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y32z2.c",
  "south" : DIR+"/rooms/x21y30z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
