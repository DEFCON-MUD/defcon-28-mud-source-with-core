inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 3 }));
  set_short( "Hallway - x25y58z3" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y59z3.c",
  "south" : DIR+"/rooms/x25y57z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
