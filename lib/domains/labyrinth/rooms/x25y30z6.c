inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 6 }));
  set_short( "Passage - x25y30z6" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y31z6.c",
  "south" : DIR+"/rooms/x25y29z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
