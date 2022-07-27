inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 30, 1 }));
  set_short( "Passage - x52y30z1" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y30z1.c",
  "east" : DIR+"/rooms/x53y30z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
