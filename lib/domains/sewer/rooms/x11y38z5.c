inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 5 }));
  set_short( "Hallway - x11y38z5" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "south" : DIR+"/rooms/x11y37z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
