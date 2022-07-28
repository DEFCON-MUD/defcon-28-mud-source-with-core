inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 2 }));
  set_short( "Hallway - x49y32z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y32z2.c",
  "south" : DIR+"/rooms/x49y31z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
