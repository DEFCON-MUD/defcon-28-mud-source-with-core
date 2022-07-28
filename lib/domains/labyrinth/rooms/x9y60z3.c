inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 3 }));
  set_short( "Passage - x9y60z3" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z3.c",
  "east" : DIR+"/rooms/x10y60z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
