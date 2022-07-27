inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 2 }));
  set_short( "Hallway - x5y50z2" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y50z2.c",
  "north" : DIR+"/rooms/x5y51z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
