inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 10, 2 }));
  set_short( "Hallway - x2y10z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y10z2.c",
  "east" : DIR+"/rooms/x3y10z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
