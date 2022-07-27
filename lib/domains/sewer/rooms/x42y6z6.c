inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 6 }));
  set_short( "Passage - x42y6z6" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z6.c",
  "east" : DIR+"/rooms/x43y6z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
