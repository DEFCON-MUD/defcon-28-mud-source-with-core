inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 10, 0 }));
  set_short( "Passage - x60y10z0" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y10z0.c",
  "east" : DIR+"/rooms/x61y10z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
