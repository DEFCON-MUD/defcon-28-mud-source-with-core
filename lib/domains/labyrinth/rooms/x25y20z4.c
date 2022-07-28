inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 4 }));
  set_short( "Passage - x25y20z4" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y20z4.c",
  "north" : DIR+"/rooms/x25y21z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
