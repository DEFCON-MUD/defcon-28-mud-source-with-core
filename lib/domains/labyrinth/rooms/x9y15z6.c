inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 15, 6 }));
  set_short( "Corridor - x9y15z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y16z6.c",
  "south" : DIR+"/rooms/x9y14z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
