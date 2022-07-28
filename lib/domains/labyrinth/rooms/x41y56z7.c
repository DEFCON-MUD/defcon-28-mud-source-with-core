inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 7 }));
  set_short( "Passage - x41y56z7" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z7.c",
  "north" : DIR+"/rooms/x41y57z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
