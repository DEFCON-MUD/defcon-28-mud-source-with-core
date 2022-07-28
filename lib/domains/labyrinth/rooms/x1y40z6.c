inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 6 }));
  set_short( "Corridor - x1y40z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z6.c",
  "south" : DIR+"/rooms/x1y39z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
