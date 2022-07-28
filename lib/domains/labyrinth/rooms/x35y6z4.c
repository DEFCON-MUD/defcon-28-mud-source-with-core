inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 4 }));
  set_short( "Passage - x35y6z4" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y6z4.c",
  "north" : DIR+"/rooms/x35y7z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
