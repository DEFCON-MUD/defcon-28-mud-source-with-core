inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 2 }));
  set_short( "Passage - x25y52z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y52z2.c",
  "north" : DIR+"/rooms/x25y53z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
