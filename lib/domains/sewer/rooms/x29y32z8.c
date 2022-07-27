inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 8 }));
  set_short( "Corridor - x29y32z8" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z8.c",
  "south" : DIR+"/rooms/x29y31z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
