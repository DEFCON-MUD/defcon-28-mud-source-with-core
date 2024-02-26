inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 37, 4 }));
  set_short( "Hallway - x19y37z4" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y38z4.c",
  "south" : DIR+"/rooms/x19y36z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
