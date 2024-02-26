inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 3 }));
  set_short( "Hallway - x31y64z3" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z3.c",
  "east" : DIR+"/rooms/x32y64z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
