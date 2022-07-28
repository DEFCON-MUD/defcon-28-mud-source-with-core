inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 3 }));
  set_short( "Passage - x53y8z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z3.c",
  "east" : DIR+"/rooms/x54y8z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
