inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 16, 1 }));
  set_short( "Corridor - x24y16z1" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y16z1.c",
  "east" : DIR+"/rooms/x25y16z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
