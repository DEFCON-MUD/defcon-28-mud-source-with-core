inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 0 }));
  set_short( "Hallway - x39y43z0" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z0.c",
  "south" : DIR+"/rooms/x39y42z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
