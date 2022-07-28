inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 7, 3 }));
  set_short( "Passage - x47y7z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y8z3.c",
  "south" : DIR+"/rooms/x47y6z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
