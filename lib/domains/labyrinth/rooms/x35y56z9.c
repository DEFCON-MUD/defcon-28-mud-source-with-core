inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 9 }));
  set_short( "Hallway - x35y56z9" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y57z9.c",
  "south" : DIR+"/rooms/x35y55z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
