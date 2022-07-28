inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 32, 2 }));
  set_short( "Hallway - x20y32z2" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y32z2.c",
  "east" : DIR+"/rooms/x21y32z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
