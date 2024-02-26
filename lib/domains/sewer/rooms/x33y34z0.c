inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 0 }));
  set_short( "Hallway - x33y34z0" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y34z0.c",
  "east" : DIR+"/rooms/x34y34z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
