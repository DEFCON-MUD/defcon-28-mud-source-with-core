inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 0 }));
  set_short( "Hallway - x61y14z0" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y15z0.c",
  "south" : DIR+"/rooms/x61y13z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
