inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 18, 6 }));
  set_short( "Hallway - x61y18z6" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y18z6.c",
  "north" : DIR+"/rooms/x61y19z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
