inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 5 }));
  set_short( "Passage - x29y27z5" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z5.c",
  "south" : DIR+"/rooms/x29y26z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
