inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 12, 6 }));
  set_short( "Hallway - x4y12z6" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y12z6.c",
  "east" : DIR+"/rooms/x5y12z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
