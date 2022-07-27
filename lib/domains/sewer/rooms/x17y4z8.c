inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 8 }));
  set_short( "Corridor - x17y4z8" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y4z8.c",
  "south" : DIR+"/rooms/x17y3z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
