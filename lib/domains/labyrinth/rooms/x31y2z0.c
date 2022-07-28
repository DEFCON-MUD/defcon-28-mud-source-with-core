inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 0 }));
  set_short( "Hallway - x31y2z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y2z0.c",
  "north" : DIR+"/rooms/x31y3z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
