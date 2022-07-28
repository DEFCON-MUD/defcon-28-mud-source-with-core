inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 56, 1 }));
  set_short( "Passage - x5y56z1" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y56z1.c",
  "north" : DIR+"/rooms/x5y57z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
