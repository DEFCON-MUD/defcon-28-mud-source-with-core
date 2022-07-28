inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 4 }));
  set_short( "Hallway - x1y27z4" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z4.c",
  "south" : DIR+"/rooms/x1y26z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
