inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 0 }));
  set_short( "Passage - x7y4z0" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z0.c",
  "east" : DIR+"/rooms/x8y4z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
