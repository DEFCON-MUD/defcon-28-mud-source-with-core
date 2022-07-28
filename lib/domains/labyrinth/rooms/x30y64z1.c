inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 1 }));
  set_short( "Passage - x30y64z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z1.c",
  "east" : DIR+"/rooms/x31y64z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
