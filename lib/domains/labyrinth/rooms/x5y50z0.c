inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 0 }));
  set_short( "Passage - x5y50z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y50z0.c",
  "east" : DIR+"/rooms/x6y50z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
