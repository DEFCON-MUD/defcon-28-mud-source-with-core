inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 3 }));
  set_short( "Passage - x51y38z3" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y38z3.c",
  "north" : DIR+"/rooms/x51y39z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
