inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 58, 8 }));
  set_short( "Corridor - x21y58z8" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y58z8.c",
  "south" : DIR+"/rooms/x21y57z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
