inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 18, 5 }));
  set_short( "Corridor - x33y18z5" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y19z5.c",
  "south" : DIR+"/rooms/x33y17z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
