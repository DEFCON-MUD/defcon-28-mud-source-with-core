inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 3 }));
  set_short( "Corridor - x9y20z3" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y21z3.c",
  "south" : DIR+"/rooms/x9y19z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
