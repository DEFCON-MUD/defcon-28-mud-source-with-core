inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 3 }));
  set_short( "Hallway - x47y6z3" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y6z3.c",
  "north" : DIR+"/rooms/x47y7z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
