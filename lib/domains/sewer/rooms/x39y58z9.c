inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 9 }));
  set_short( "Hallway - x39y58z9" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y59z9.c",
  "south" : DIR+"/rooms/x39y57z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
