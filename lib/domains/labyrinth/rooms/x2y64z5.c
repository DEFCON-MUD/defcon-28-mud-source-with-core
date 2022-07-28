inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 5 }));
  set_short( "Hallway - x2y64z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y64z5.c",
  "east" : DIR+"/rooms/x3y64z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
