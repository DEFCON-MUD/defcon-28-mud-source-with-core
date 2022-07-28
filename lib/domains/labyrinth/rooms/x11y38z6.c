inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 6 }));
  set_short( "Corridor - x11y38z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y38z6.c",
  "north" : DIR+"/rooms/x11y39z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
