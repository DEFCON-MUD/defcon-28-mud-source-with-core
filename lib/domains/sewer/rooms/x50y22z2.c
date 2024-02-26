inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 22, 2 }));
  set_short( "Hallway - x50y22z2" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y22z2.c",
  "east" : DIR+"/rooms/x51y22z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
