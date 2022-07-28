inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 55, 2 }));
  set_short( "Corridor - x61y55z2" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y56z2.c",
  "south" : DIR+"/rooms/x61y54z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
