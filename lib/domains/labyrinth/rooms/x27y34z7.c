inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 7 }));
  set_short( "Corridor - x27y34z7" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y34z7.c",
  "south" : DIR+"/rooms/x27y33z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
