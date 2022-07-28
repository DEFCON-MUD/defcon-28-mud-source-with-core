inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 23, 4 }));
  set_short( "Hallway - x25y23z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y24z4.c",
  "south" : DIR+"/rooms/x25y22z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
