inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 14, 6 }));
  set_short( "Corridor - x51y14z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y14z6.c",
  "south" : DIR+"/rooms/x51y13z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
