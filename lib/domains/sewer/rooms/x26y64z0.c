inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 64, 0 }));
  set_short( "Hallway - x26y64z0" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y64z0.c",
  "east" : DIR+"/rooms/x27y64z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
