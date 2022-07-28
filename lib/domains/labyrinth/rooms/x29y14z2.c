inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 2 }));
  set_short( "Passage - x29y14z2" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y15z2.c",
  "south" : DIR+"/rooms/x29y13z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
