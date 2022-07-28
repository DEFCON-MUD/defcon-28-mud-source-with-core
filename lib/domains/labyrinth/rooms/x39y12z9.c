inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 9 }));
  set_short( "Passage - x39y12z9" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y12z9.c",
  "north" : DIR+"/rooms/x39y13z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
