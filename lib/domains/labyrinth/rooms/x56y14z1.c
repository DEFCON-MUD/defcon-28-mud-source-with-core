inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 14, 1 }));
  set_short( "Passage - x56y14z1" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y14z1.c",
  "east" : DIR+"/rooms/x57y14z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
