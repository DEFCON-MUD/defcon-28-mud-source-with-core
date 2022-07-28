inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 9 }));
  set_short( "Corridor - x29y40z9" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z9.c",
  "east" : DIR+"/rooms/x30y40z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
