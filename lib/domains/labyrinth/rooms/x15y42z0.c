inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 0 }));
  set_short( "Passage - x15y42z0" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y42z0.c",
  "north" : DIR+"/rooms/x15y43z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
