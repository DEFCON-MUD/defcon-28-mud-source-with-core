inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 9 }));
  set_short( "Corridor - x61y16z9" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z9.c",
  "south" : DIR+"/rooms/x61y15z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
