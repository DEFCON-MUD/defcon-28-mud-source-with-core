inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 4 }));
  set_short( "Corridor - x57y38z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y38z4.c",
  "south" : DIR+"/rooms/x57y37z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
