inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 34, 3 }));
  set_short( "Passage - x45y34z3" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y34z3.c",
  "south" : DIR+"/rooms/x45y33z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
