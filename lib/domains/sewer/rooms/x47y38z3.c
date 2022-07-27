inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 3 }));
  set_short( "Hallway - x47y38z3" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y38z3.c",
  "north" : DIR+"/rooms/x47y39z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
