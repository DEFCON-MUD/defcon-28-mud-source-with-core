inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 28, 0 }));
  set_short( "Corridor - x28y28z0" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y28z0.c",
  "east" : DIR+"/rooms/x29y28z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
