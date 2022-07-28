inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 2 }));
  set_short( "Corridor - x3y38z2" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y38z2.c",
  "south" : DIR+"/rooms/x3y37z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
