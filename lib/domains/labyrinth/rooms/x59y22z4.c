inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 4 }));
  set_short( "Hallway - x59y22z4" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y22z4.c",
  "east" : DIR+"/rooms/x60y22z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
