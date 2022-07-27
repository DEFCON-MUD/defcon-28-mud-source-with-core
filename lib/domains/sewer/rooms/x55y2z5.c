inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 5 }));
  set_short( "Hallway - x55y2z5" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y2z5.c",
  "north" : DIR+"/rooms/x55y3z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
