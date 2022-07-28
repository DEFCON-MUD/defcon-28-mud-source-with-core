inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 4 }));
  set_short( "Passage - x27y0z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z4.c",
  "east" : DIR+"/rooms/x28y0z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
