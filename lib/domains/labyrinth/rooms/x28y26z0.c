inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 26, 0 }));
  set_short( "Hallway - x28y26z0" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y26z0.c",
  "east" : DIR+"/rooms/x29y26z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
