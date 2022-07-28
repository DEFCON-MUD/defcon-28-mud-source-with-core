inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 28, 2 }));
  set_short( "Passage - x10y28z2" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y28z2.c",
  "east" : DIR+"/rooms/x11y28z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
