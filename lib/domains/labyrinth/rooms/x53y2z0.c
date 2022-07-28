inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 2, 0 }));
  set_short( "Hallway - x53y2z0" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y2z0.c",
  "north" : DIR+"/rooms/x53y3z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
