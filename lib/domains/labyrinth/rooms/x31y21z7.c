inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 7 }));
  set_short( "Passage - x31y21z7" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z7.c",
  "south" : DIR+"/rooms/x31y20z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
