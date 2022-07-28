inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 6 }));
  set_short( "Passage - x33y8z6" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y8z6.c",
  "north" : DIR+"/rooms/x33y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
