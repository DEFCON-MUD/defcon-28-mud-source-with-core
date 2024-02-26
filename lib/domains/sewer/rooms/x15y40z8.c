inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 40, 8 }));
  set_short( "Hallway - x15y40z8" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y40z8.c",
  "south" : DIR+"/rooms/x15y39z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
