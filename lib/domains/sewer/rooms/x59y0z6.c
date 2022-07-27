inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 0, 6 }));
  set_short( "Corridor - x59y0z6" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y0z6.c",
  "east" : DIR+"/rooms/x60y0z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
