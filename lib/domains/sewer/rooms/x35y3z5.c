inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 3, 5 }));
  set_short( "Hallway - x35y3z5" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y4z5.c",
  "south" : DIR+"/rooms/x35y2z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
