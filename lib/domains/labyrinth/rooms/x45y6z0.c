inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 0 }));
  set_short( "Hallway - x45y6z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y6z0.c",
  "south" : DIR+"/rooms/x45y5z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
