inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 0 }));
  set_short( "Hallway - x39y6z0" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z0.c",
  "east" : DIR+"/rooms/x40y6z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
