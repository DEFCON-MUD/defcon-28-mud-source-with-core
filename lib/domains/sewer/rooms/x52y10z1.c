inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 10, 1 }));
  set_short( "Corridor - x52y10z1" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y10z1.c",
  "east" : DIR+"/rooms/x53y10z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
