inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 5 }));
  set_short( "Hallway - x13y34z5" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y34z5.c",
  "south" : DIR+"/rooms/x13y33z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
