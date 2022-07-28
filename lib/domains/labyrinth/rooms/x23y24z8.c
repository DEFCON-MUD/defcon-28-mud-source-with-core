inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 24, 8 }));
  set_short( "Hallway - x23y24z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y25z8.c",
  "south" : DIR+"/rooms/x23y23z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
