inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 20, 0 }));
  set_short( "Hallway - x46y20z0" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y20z0.c",
  "east" : DIR+"/rooms/x47y20z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
