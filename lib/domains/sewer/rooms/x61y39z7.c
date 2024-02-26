inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 39, 7 }));
  set_short( "Corridor - x61y39z7" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y40z7.c",
  "south" : DIR+"/rooms/x61y38z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
