inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 40, 8 }));
  set_short( "Corridor - x4y40z8" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y40z8.c",
  "east" : DIR+"/rooms/x5y40z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
