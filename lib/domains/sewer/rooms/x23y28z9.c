inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 9 }));
  set_short( "Passage - x23y28z9" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y28z9.c",
  "north" : DIR+"/rooms/x23y29z9.c",
  "south" : DIR+"/rooms/x23y27z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
