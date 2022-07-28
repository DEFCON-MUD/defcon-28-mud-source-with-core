inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 57, 4 }));
  set_short( "Hallway - x13y57z4" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y58z4.c",
  "south" : DIR+"/rooms/x13y56z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
