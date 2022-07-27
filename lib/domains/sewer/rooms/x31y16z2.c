inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 2 }));
  set_short( "Corridor - x31y16z2" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "south" : DIR+"/rooms/x31y15z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
