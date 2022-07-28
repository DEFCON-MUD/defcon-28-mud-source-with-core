inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 1 }));
  set_short( "Passage - x5y18z1" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y18z1.c",
  "south" : DIR+"/rooms/x5y17z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
