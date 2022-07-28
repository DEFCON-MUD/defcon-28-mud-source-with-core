inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 30, 3 }));
  set_short( "Hallway - x12y30z3" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y30z3.c",
  "east" : DIR+"/rooms/x13y30z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
