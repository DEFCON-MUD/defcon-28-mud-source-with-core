inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 17, 8 }));
  set_short( "Hallway - x43y17z8" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y18z8.c",
  "south" : DIR+"/rooms/x43y16z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
