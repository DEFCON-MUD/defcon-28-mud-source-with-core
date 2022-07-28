inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 53, 6 }));
  set_short( "Hallway - x1y53z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y54z6.c",
  "south" : DIR+"/rooms/x1y52z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
