inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 3 }));
  set_short( "Hallway - x11y52z3" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y52z3.c",
  "south" : DIR+"/rooms/x11y51z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
