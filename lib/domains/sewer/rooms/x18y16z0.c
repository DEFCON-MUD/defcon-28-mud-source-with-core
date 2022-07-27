inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 16, 0 }));
  set_short( "Hallway - x18y16z0" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y16z0.c",
  "east" : DIR+"/rooms/x19y16z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
