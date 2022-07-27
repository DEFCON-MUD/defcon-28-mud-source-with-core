inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 18, 3 }));
  set_short( "Corridor - x2y18z3" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y18z3.c",
  "east" : DIR+"/rooms/x3y18z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
