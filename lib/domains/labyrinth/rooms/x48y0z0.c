inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 0 }));
  set_short( "Passage - x48y0z0" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z0.c",
  "east" : DIR+"/rooms/x49y0z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
