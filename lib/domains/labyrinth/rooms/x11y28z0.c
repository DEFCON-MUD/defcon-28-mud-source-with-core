inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 28, 0 }));
  set_short( "Corridor - x11y28z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y28z0.c",
  "north" : DIR+"/rooms/x11y29z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
