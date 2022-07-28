inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 34, 1 }));
  set_short( "Passage - x34y34z1" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y34z1.c",
  "east" : DIR+"/rooms/x35y34z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
