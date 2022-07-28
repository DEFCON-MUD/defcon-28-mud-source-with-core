inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 3, 0 }));
  set_short( "Corridor - x1y3z0" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y4z0.c",
  "south" : DIR+"/rooms/x1y2z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
