inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 33, 4 }));
  set_short( "Passage - x39y33z4" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y34z4.c",
  "south" : DIR+"/rooms/x39y32z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
