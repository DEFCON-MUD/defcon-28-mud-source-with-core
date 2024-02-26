inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 4, 3 }));
  set_short( "Hallway - x34y4z3" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y4z3.c",
  "east" : DIR+"/rooms/x35y4z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
