inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 0, 0 }));
  set_short( "Hallway - x2y0z0" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y0z0.c",
  "east" : DIR+"/rooms/x3y0z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
