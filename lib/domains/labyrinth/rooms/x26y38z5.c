inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 5 }));
  set_short( "Passage - x26y38z5" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z5.c",
  "east" : DIR+"/rooms/x27y38z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
