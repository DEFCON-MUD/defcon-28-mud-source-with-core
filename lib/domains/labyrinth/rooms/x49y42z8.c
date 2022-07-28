inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 8 }));
  set_short( "Corridor - x49y42z8" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y42z8.c",
  "east" : DIR+"/rooms/x50y42z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
