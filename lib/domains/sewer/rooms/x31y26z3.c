inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 3 }));
  set_short( "Passage - x31y26z3" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y26z3.c",
  "north" : DIR+"/rooms/x31y27z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
