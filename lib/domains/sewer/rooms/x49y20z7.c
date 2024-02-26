inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 20, 7 }));
  set_short( "Hallway - x49y20z7" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y20z7.c",
  "east" : DIR+"/rooms/x50y20z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
