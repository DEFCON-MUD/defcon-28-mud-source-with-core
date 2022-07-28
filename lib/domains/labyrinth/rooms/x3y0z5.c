inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 5 }));
  set_short( "Passage - x3y0z5" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z5.c",
  "east" : DIR+"/rooms/x4y0z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
