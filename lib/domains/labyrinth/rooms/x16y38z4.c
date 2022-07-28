inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 38, 4 }));
  set_short( "Hallway - x16y38z4" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y38z4.c",
  "east" : DIR+"/rooms/x17y38z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
