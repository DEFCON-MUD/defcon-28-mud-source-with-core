inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 26, 3 }));
  set_short( "Corridor - x53y26z3" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y26z3.c",
  "north" : DIR+"/rooms/x53y27z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
