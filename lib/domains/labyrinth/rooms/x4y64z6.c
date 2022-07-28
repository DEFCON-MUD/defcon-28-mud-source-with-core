inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 6 }));
  set_short( "Corridor - x4y64z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z6.c",
  "east" : DIR+"/rooms/x5y64z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
