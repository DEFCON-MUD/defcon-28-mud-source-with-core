inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 58, 1 }));
  set_short( "Passage - x53y58z1" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y58z1.c",
  "south" : DIR+"/rooms/x53y57z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
