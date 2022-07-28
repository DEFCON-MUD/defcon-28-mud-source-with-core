inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 1 }));
  set_short( "Passage - x58y14z1" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z1.c",
  "east" : DIR+"/rooms/x59y14z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
