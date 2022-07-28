inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 40, 0 }));
  set_short( "Passage - x52y40z0" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y40z0.c",
  "east" : DIR+"/rooms/x53y40z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
