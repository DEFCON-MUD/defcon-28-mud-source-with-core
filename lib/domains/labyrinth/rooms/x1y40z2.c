inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 2 }));
  set_short( "Corridor - x1y40z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y40z2.c",
  "south" : DIR+"/rooms/x1y39z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
