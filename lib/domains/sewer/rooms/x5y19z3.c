inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 19, 3 }));
  set_short( "Corridor - x5y19z3" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y20z3.c",
  "south" : DIR+"/rooms/x5y18z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
