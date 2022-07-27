inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 4 }));
  set_short( "Hallway - x6y2z4" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z4.c",
  "east" : DIR+"/rooms/x7y2z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
