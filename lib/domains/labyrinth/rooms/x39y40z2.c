inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 40, 2 }));
  set_short( "Corridor - x39y40z2" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y40z2.c",
  "south" : DIR+"/rooms/x39y39z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
