inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 54, 8 }));
  set_short( "Corridor - x7y54z8" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y54z8.c",
  "north" : DIR+"/rooms/x7y55z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
