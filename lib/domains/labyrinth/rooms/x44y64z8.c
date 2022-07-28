inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 64, 8 }));
  set_short( "Passage - x44y64z8" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y64z8.c",
  "east" : DIR+"/rooms/x45y64z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
