inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 5 }));
  set_short( "Hallway - x21y18z5" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y18z5.c",
  "north" : DIR+"/rooms/x21y19z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
