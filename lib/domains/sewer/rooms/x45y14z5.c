inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 5 }));
  set_short( "Corridor - x45y14z5" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y14z5.c",
  "south" : DIR+"/rooms/x45y13z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
