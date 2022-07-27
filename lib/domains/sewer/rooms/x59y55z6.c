inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 55, 6 }));
  set_short( "Passage - x59y55z6" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y56z6.c",
  "south" : DIR+"/rooms/x59y54z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
