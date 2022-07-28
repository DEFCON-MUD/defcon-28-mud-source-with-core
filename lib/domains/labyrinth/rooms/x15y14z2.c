inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 14, 2 }));
  set_short( "Hallway - x15y14z2" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y14z2.c",
  "east" : DIR+"/rooms/x16y14z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
