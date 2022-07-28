inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 5 }));
  set_short( "Hallway - x25y14z5" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y14z5.c",
  "south" : DIR+"/rooms/x25y13z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
