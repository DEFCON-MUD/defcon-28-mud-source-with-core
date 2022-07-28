inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 20, 0 }));
  set_short( "Passage - x52y20z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y20z0.c",
  "east" : DIR+"/rooms/x53y20z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
