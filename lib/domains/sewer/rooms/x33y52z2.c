inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 52, 2 }));
  set_short( "Corridor - x33y52z2" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y52z2.c",
  "north" : DIR+"/rooms/x33y53z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
