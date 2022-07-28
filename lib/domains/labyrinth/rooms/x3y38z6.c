inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 6 }));
  set_short( "Passage - x3y38z6" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y38z6.c",
  "east" : DIR+"/rooms/x4y38z6.c",
  "south" : DIR+"/rooms/x3y37z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
