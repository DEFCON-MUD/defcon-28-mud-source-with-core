inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 2 }));
  set_short( "Passage - x41y32z2" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y32z2.c",
  "north" : DIR+"/rooms/x41y33z2.c",
  "south" : DIR+"/rooms/x41y31z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
