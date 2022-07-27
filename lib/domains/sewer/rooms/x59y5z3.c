inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 5, 3 }));
  set_short( "Passage - x59y5z3" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y6z3.c",
  "south" : DIR+"/rooms/x59y4z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
