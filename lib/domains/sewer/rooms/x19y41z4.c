inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 41, 4 }));
  set_short( "Passage - x19y41z4" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y42z4.c",
  "south" : DIR+"/rooms/x19y40z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
