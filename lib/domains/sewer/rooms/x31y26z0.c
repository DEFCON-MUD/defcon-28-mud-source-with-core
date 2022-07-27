inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 0 }));
  set_short( "Corridor - x31y26z0" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y26z0.c",
  "north" : DIR+"/rooms/x31y27z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
