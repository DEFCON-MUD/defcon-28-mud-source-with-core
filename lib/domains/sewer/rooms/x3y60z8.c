inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 60, 8 }));
  set_short( "Passage - x3y60z8" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y60z8.c",
  "south" : DIR+"/rooms/x3y59z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
