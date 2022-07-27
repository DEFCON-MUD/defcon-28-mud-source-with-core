inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 20, 9 }));
  set_short( "Passage - x40y20z9" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y20z9.c",
  "east" : DIR+"/rooms/x41y20z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
