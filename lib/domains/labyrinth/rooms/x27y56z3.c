inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 3 }));
  set_short( "Passage - x27y56z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z3.c",
  "north" : DIR+"/rooms/x27y57z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
