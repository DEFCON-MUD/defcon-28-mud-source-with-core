inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 54, 7 }));
  set_short( "Hallway - x40y54z7" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y54z7.c",
  "east" : DIR+"/rooms/x41y54z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
