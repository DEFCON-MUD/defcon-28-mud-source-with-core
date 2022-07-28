inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 2 }));
  set_short( "Passage - x59y34z2" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y34z2.c",
  "north" : DIR+"/rooms/x59y35z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
