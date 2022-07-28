inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 5 }));
  set_short( "Hallway - x18y0z5" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z5.c",
  "east" : DIR+"/rooms/x19y0z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
