inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 8 }));
  set_short( "Passage - x33y38z8" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y38z8.c",
  "north" : DIR+"/rooms/x33y39z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
