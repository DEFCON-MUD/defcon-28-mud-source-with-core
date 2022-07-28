inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 39, 3 }));
  set_short( "Passage - x23y39z3" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y40z3.c",
  "south" : DIR+"/rooms/x23y38z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
