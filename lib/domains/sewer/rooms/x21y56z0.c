inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 0 }));
  set_short( "Corridor - x21y56z0" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y56z0.c",
  "east" : DIR+"/rooms/x22y56z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
