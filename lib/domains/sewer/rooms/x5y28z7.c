inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 7 }));
  set_short( "Passage - x5y28z7" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y28z7.c",
  "east" : DIR+"/rooms/x6y28z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
