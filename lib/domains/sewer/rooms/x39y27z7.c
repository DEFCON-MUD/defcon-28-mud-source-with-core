inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 27, 7 }));
  set_short( "Corridor - x39y27z7" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y28z7.c",
  "south" : DIR+"/rooms/x39y26z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
