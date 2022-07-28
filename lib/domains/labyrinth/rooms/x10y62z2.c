inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 62, 2 }));
  set_short( "Passage - x10y62z2" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y62z2.c",
  "east" : DIR+"/rooms/x11y62z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
