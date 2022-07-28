inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 34, 2 }));
  set_short( "Passage - x31y34z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y34z2.c",
  "east" : DIR+"/rooms/x32y34z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
