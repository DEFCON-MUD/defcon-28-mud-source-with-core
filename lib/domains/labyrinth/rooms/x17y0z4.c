inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 0, 4 }));
  set_short( "Corridor - x17y0z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y0z4.c",
  "east" : DIR+"/rooms/x18y0z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
