inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 2, 5 }));
  set_short( "Hallway - x51y2z5" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y2z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
