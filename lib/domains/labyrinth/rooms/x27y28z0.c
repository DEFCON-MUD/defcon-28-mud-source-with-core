inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 0 }));
  set_short( "Corridor - x27y28z0" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y28z0.c",
  "east" : DIR+"/rooms/x28y28z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
