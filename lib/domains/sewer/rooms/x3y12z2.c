inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 2 }));
  set_short( "Hallway - x3y12z2" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y13z2.c",
  "south" : DIR+"/rooms/x3y11z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
