inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 62, 4 }));
  set_short( "Corridor - x51y62z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y62z4.c",
  "east" : DIR+"/rooms/x52y62z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
