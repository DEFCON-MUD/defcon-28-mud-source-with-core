inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 7 }));
  set_short( "Passage - x35y6z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y6z7.c",
  "north" : DIR+"/rooms/x35y7z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
