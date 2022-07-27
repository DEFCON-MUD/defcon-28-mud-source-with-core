inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 1 }));
  set_short( "Corridor - x59y56z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y56z1.c",
  "north" : DIR+"/rooms/x59y57z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
