inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 3, 5 }));
  set_short( "Passage - x43y3z5" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y4z5.c",
  "south" : DIR+"/rooms/x43y2z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
