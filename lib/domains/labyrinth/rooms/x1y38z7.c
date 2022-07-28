inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 7 }));
  set_short( "Passage - x1y38z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z7.c",
  "north" : DIR+"/rooms/x1y39z7.c",
  "south" : DIR+"/rooms/x1y37z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
