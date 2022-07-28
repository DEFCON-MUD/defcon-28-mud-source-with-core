inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 0 }));
  set_short( "Corridor - x35y0z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z0.c",
  "east" : DIR+"/rooms/x36y0z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
