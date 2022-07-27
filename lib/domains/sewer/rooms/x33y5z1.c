inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 5, 1 }));
  set_short( "Hallway - x33y5z1" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y6z1.c",
  "south" : DIR+"/rooms/x33y4z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
