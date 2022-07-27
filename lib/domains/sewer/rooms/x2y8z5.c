inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 8, 5 }));
  set_short( "Corridor - x2y8z5" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y8z5.c",
  "east" : DIR+"/rooms/x3y8z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
