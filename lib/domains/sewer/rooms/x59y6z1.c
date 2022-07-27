inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 1 }));
  set_short( "Passage - x59y6z1" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y6z1.c",
  "north" : DIR+"/rooms/x59y7z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
