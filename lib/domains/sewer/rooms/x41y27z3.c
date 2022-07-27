inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 27, 3 }));
  set_short( "Hallway - x41y27z3" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y28z3.c",
  "south" : DIR+"/rooms/x41y26z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
