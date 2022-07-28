inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 8, 0 }));
  set_short( "Hallway - x10y8z0" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y8z0.c",
  "east" : DIR+"/rooms/x11y8z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
