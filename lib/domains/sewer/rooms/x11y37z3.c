inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 3 }));
  set_short( "Hallway - x11y37z3" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z3.c",
  "south" : DIR+"/rooms/x11y36z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
