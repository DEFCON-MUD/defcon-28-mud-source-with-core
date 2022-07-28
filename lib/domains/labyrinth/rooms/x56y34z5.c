inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 34, 5 }));
  set_short( "Corridor - x56y34z5" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y34z5.c",
  "east" : DIR+"/rooms/x57y34z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
