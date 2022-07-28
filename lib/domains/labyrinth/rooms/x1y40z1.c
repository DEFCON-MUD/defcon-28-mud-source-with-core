inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 1 }));
  set_short( "Passage - x1y40z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z1.c",
  "south" : DIR+"/rooms/x1y39z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
