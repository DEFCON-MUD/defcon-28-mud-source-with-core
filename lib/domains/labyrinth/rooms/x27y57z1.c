inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 57, 1 }));
  set_short( "Passage - x27y57z1" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y58z1.c",
  "south" : DIR+"/rooms/x27y56z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
