inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 13, 2 }));
  set_short( "Passage - x47y13z2" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y14z2.c",
  "south" : DIR+"/rooms/x47y12z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
