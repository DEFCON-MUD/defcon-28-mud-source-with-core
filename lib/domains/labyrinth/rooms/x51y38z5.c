inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 5 }));
  set_short( "Hallway - x51y38z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y38z5.c",
  "north" : DIR+"/rooms/x51y39z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
