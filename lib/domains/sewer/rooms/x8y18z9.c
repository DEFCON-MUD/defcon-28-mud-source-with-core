inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 9 }));
  set_short( "Hallway - x8y18z9" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z9.c",
  "east" : DIR+"/rooms/x9y18z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
