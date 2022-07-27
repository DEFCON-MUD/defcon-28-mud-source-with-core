inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 40, 0 }));
  set_short( "Corridor - x39y40z0" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y40z0.c",
  "south" : DIR+"/rooms/x39y39z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
