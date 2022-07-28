inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 4 }));
  set_short( "Passage - x3y30z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y30z4.c",
  "north" : DIR+"/rooms/x3y31z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
