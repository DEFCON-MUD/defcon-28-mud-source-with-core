inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 3 }));
  set_short( "Corridor - x36y0z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z3.c",
  "east" : DIR+"/rooms/x37y0z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
