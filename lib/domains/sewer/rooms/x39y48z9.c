inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 9 }));
  set_short( "Corridor - x39y48z9" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y48z9.c",
  "north" : DIR+"/rooms/x39y49z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
