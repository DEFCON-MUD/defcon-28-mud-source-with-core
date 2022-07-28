inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 14, 0 }));
  set_short( "Hallway - x51y14z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y14z0.c",
  "south" : DIR+"/rooms/x51y13z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
