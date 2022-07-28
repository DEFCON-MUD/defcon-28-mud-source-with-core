inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 30, 9 }));
  set_short( "Passage - x34y30z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y30z9.c",
  "east" : DIR+"/rooms/x35y30z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
