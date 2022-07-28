inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 1 }));
  set_short( "Corridor - x21y64z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z1.c",
  "east" : DIR+"/rooms/x22y64z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
