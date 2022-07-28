inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 0 }));
  set_short( "Corridor - x59y24z0" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z0.c",
  "east" : DIR+"/rooms/x60y24z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
