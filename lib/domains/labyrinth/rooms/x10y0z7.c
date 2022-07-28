inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 7 }));
  set_short( "Hallway - x10y0z7" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z7.c",
  "east" : DIR+"/rooms/x11y0z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
