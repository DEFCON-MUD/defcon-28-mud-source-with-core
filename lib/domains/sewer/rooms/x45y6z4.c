inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 4 }));
  set_short( "Passage - x45y6z4" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y6z4.c",
  "east" : DIR+"/rooms/x46y6z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
