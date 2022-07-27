inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 2 }));
  set_short( "Hallway - x1y2z2" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
