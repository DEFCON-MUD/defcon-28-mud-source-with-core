inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 64, 4 }));
  set_short( "Passage - x26y64z4" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y64z4.c",
  "east" : DIR+"/rooms/x27y64z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
