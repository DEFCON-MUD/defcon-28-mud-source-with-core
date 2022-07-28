inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 6 }));
  set_short( "Passage - x5y22z6" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y22z6.c",
  "north" : DIR+"/rooms/x5y23z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
