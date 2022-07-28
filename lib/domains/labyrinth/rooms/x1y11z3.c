inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 3 }));
  set_short( "Corridor - x1y11z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z3.c",
  "south" : DIR+"/rooms/x1y10z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
