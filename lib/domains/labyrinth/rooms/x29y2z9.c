inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 2, 9 }));
  set_short( "Corridor - x29y2z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y2z9.c",
  "north" : DIR+"/rooms/x29y3z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
