inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 8 }));
  set_short( "Passage - x33y26z8" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y26z8.c",
  "north" : DIR+"/rooms/x33y27z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
