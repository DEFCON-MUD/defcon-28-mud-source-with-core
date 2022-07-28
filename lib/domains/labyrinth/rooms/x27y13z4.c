inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 13, 4 }));
  set_short( "Corridor - x27y13z4" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y14z4.c",
  "south" : DIR+"/rooms/x27y12z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
