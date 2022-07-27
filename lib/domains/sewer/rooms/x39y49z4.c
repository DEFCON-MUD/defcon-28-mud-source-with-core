inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 49, 4 }));
  set_short( "Passage - x39y49z4" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y50z4.c",
  "south" : DIR+"/rooms/x39y48z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
