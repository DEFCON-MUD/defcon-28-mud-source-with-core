inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 2 }));
  set_short( "Hallway - x37y64z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z2.c",
  "east" : DIR+"/rooms/x38y64z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
