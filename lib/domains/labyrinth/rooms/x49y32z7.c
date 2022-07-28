inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 7 }));
  set_short( "Hallway - x49y32z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y33z7.c",
  "south" : DIR+"/rooms/x49y31z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
