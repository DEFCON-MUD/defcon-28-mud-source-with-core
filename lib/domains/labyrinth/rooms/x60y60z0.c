inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 60, 0 }));
  set_short( "Hallway - x60y60z0" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y60z0.c",
  "east" : DIR+"/rooms/x61y60z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
