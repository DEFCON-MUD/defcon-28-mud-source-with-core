inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 42, 0 }));
  set_short( "Hallway - x26y42z0" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y42z0.c",
  "east" : DIR+"/rooms/x27y42z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
