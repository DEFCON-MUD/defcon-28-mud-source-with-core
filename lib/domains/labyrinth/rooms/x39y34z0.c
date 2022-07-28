inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 0 }));
  set_short( "Hallway - x39y34z0" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y35z0.c",
  "south" : DIR+"/rooms/x39y33z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
