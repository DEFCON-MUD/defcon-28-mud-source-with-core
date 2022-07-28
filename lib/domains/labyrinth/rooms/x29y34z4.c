inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 4 }));
  set_short( "Passage - x29y34z4" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y34z4.c",
  "south" : DIR+"/rooms/x29y33z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
