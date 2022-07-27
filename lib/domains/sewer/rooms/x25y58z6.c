inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 6 }));
  set_short( "Hallway - x25y58z6" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y58z6.c",
  "north" : DIR+"/rooms/x25y59z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
