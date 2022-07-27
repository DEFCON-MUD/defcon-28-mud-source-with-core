inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 41, 1 }));
  set_short( "Hallway - x27y41z1" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y42z1.c",
  "south" : DIR+"/rooms/x27y40z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
