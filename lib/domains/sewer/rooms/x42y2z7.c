inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 2, 7 }));
  set_short( "Passage - x42y2z7" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y2z7.c",
  "east" : DIR+"/rooms/x43y2z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
