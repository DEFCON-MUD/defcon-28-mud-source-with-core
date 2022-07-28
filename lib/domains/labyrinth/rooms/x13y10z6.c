inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 10, 6 }));
  set_short( "Passage - x13y10z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y10z6.c",
  "east" : DIR+"/rooms/x14y10z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
