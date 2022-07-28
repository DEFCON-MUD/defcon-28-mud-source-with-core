inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 4 }));
  set_short( "Passage - x23y54z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y54z4.c",
  "north" : DIR+"/rooms/x23y55z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
