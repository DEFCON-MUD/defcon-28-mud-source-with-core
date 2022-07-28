inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 0 }));
  set_short( "Corridor - x53y10z0" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y11z0.c",
  "south" : DIR+"/rooms/x53y9z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
