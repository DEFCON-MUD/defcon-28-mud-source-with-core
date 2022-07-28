inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 4 }));
  set_short( "Passage - x25y44z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y44z4.c",
  "north" : DIR+"/rooms/x25y45z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
