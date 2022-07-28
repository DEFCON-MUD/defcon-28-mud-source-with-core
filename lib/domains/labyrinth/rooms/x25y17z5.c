inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 17, 5 }));
  set_short( "Passage - x25y17z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y18z5.c",
  "south" : DIR+"/rooms/x25y16z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
