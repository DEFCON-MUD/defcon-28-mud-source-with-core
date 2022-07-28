inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 0 }));
  set_short( "Corridor - x55y38z0" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y38z0.c",
  "east" : DIR+"/rooms/x56y38z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
