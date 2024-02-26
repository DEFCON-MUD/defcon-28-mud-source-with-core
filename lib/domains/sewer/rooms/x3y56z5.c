inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 5 }));
  set_short( "Passage - x3y56z5" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y57z5.c",
  "south" : DIR+"/rooms/x3y55z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
