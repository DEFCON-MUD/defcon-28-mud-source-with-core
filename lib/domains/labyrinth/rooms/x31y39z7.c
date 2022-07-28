inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 39, 7 }));
  set_short( "Corridor - x31y39z7" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y40z7.c",
  "south" : DIR+"/rooms/x31y38z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
