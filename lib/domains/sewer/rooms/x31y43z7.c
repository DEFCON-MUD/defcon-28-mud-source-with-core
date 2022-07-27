inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 7 }));
  set_short( "Corridor - x31y43z7" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z7.c",
  "south" : DIR+"/rooms/x31y42z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
