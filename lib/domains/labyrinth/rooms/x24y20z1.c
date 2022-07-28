inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 1 }));
  set_short( "Corridor - x24y20z1" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z1.c",
  "east" : DIR+"/rooms/x25y20z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
