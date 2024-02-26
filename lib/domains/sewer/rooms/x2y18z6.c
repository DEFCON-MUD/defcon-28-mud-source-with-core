inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 18, 6 }));
  set_short( "Hallway - x2y18z6" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y18z6.c",
  "east" : DIR+"/rooms/x3y18z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
