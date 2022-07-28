inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 1 }));
  set_short( "Passage - x61y58z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y59z1.c",
  "south" : DIR+"/rooms/x61y57z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
