inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 34, 4 }));
  set_short( "Passage - x54y34z4" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y34z4.c",
  "east" : DIR+"/rooms/x55y34z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
