inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 5 }));
  set_short( "Passage - x25y22z5" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y23z5.c",
  "south" : DIR+"/rooms/x25y21z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
