inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 31, 6 }));
  set_short( "Hallway - x51y31z6" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y32z6.c",
  "south" : DIR+"/rooms/x51y30z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
