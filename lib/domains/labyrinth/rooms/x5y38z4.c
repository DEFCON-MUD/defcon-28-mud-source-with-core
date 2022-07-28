inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 4 }));
  set_short( "Hallway - x5y38z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y38z4.c",
  "east" : DIR+"/rooms/x6y38z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
