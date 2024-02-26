inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 18, 0 }));
  set_short( "Passage - x33y18z0" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y18z0.c",
  "north" : DIR+"/rooms/x33y19z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
