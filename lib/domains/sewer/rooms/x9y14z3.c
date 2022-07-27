inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 14, 3 }));
  set_short( "Corridor - x9y14z3" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y14z3.c",
  "south" : DIR+"/rooms/x9y13z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
