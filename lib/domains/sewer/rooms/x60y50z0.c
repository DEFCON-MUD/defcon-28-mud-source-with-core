inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 50, 0 }));
  set_short( "Corridor - x60y50z0" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y50z0.c",
  "east" : DIR+"/rooms/x61y50z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
