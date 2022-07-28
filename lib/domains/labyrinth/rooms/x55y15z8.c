inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 15, 8 }));
  set_short( "Corridor - x55y15z8" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y16z8.c",
  "south" : DIR+"/rooms/x55y14z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
