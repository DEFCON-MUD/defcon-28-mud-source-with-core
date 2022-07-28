inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 6 }));
  set_short( "Corridor - x51y64z6" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z6.c",
  "east" : DIR+"/rooms/x52y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
