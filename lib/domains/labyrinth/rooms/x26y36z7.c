inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 36, 7 }));
  set_short( "Passage - x26y36z7" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y36z7.c",
  "east" : DIR+"/rooms/x27y36z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
