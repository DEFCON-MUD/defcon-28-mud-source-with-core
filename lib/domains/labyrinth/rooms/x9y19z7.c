inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 19, 7 }));
  set_short( "Corridor - x9y19z7" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y20z7.c",
  "south" : DIR+"/rooms/x9y18z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
