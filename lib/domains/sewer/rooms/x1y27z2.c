inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 2 }));
  set_short( "Passage - x1y27z2" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z2.c",
  "south" : DIR+"/rooms/x1y26z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
