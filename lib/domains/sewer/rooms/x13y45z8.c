inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 8 }));
  set_short( "Corridor - x13y45z8" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z8.c",
  "south" : DIR+"/rooms/x13y44z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
