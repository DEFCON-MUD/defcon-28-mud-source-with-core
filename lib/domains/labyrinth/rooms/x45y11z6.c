inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 11, 6 }));
  set_short( "Passage - x45y11z6" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y12z6.c",
  "south" : DIR+"/rooms/x45y10z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
