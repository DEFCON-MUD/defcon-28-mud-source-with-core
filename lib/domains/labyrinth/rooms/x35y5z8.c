inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 5, 8 }));
  set_short( "Hallway - x35y5z8" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y6z8.c",
  "south" : DIR+"/rooms/x35y4z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
