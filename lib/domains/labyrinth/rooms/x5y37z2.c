inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 37, 2 }));
  set_short( "Passage - x5y37z2" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y38z2.c",
  "south" : DIR+"/rooms/x5y36z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
