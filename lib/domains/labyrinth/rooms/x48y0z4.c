inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 4 }));
  set_short( "Corridor - x48y0z4" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z4.c",
  "east" : DIR+"/rooms/x49y0z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
