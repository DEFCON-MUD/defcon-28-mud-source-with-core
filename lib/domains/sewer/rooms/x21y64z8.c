inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 8 }));
  set_short( "Corridor - x21y64z8" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z8.c",
  "east" : DIR+"/rooms/x22y64z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
