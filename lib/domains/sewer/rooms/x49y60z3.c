inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 3 }));
  set_short( "Corridor - x49y60z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y60z3.c",
  "south" : DIR+"/rooms/x49y59z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
