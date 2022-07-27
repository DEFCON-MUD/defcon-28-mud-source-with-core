inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 2 }));
  set_short( "Corridor - x9y40z2" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y41z2.c",
  "south" : DIR+"/rooms/x9y39z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
