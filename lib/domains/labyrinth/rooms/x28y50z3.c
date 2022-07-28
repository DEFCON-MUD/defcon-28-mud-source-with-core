inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 50, 3 }));
  set_short( "Corridor - x28y50z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y50z3.c",
  "east" : DIR+"/rooms/x29y50z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
