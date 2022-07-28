inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 9 }));
  set_short( "Hallway - x25y4z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y5z9.c",
  "south" : DIR+"/rooms/x25y3z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
