inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 60, 3 }));
  set_short( "Hallway - x8y60z3" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y60z3.c",
  "east" : DIR+"/rooms/x9y60z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
