inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 12, 0 }));
  set_short( "Hallway - x4y12z0" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y12z0.c",
  "east" : DIR+"/rooms/x5y12z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
