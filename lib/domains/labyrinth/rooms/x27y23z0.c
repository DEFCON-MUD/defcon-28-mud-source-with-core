inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 23, 0 }));
  set_short( "Passage - x27y23z0" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y24z0.c",
  "south" : DIR+"/rooms/x27y22z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
