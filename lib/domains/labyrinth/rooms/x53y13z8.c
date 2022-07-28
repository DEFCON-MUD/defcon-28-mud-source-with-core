inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 13, 8 }));
  set_short( "Passage - x53y13z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y14z8.c",
  "south" : DIR+"/rooms/x53y12z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
