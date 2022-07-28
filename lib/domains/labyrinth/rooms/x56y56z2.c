inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 56, 2 }));
  set_short( "Passage - x56y56z2" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y56z2.c",
  "east" : DIR+"/rooms/x57y56z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
