inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 3, 1 }));
  set_short( "Passage - x1y3z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y4z1.c",
  "south" : DIR+"/rooms/x1y2z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
