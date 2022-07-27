inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 4 }));
  set_short( "Passage - x11y17z4" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z4.c",
  "south" : DIR+"/rooms/x11y16z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
