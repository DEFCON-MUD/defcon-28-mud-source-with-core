inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 0 }));
  set_short( "Passage - x11y56z0" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y57z0.c",
  "south" : DIR+"/rooms/x11y55z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
