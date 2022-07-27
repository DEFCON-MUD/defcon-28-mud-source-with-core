inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 49, 3 }));
  set_short( "Corridor - x1y49z3" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y50z3.c",
  "south" : DIR+"/rooms/x1y48z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
