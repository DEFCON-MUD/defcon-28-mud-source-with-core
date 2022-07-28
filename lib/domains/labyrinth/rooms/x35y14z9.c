inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 9 }));
  set_short( "Hallway - x35y14z9" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y14z9.c",
  "south" : DIR+"/rooms/x35y13z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
