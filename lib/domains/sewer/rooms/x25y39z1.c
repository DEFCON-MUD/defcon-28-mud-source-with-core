inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 39, 1 }));
  set_short( "Passage - x25y39z1" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y40z1.c",
  "south" : DIR+"/rooms/x25y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
