inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 2 }));
  set_short( "Hallway - x2y20z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z2.c",
  "east" : DIR+"/rooms/x3y20z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
