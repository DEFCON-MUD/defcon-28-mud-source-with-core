inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 62, 3 }));
  set_short( "Corridor - x10y62z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y62z3.c",
  "east" : DIR+"/rooms/x11y62z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
