inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 18, 1 }));
  set_short( "Corridor - x30y18z1" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y18z1.c",
  "east" : DIR+"/rooms/x31y18z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
