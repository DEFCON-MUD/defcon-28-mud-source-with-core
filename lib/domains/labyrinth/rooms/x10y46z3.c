inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 46, 3 }));
  set_short( "Passage - x10y46z3" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y46z3.c",
  "east" : DIR+"/rooms/x11y46z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
