inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 6, 2 }));
  set_short( "Passage - x31y6z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y6z2.c",
  "north" : DIR+"/rooms/x31y7z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
