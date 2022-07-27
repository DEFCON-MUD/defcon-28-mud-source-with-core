inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 6 }));
  set_short( "Corridor - x43y8z6" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y8z6.c",
  "north" : DIR+"/rooms/x43y9z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
