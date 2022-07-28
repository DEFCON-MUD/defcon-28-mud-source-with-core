inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 0, 0 }));
  set_short( "Passage - x30y0z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y0z0.c",
  "east" : DIR+"/rooms/x31y0z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
