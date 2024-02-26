inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 4 }));
  set_short( "Hallway - x1y10z4" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y11z4.c",
  "south" : DIR+"/rooms/x1y9z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
