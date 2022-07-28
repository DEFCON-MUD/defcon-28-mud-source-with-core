inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 51, 3 }));
  set_short( "Passage - x11y51z3" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y52z3.c",
  "south" : DIR+"/rooms/x11y50z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
