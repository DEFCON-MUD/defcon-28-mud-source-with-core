inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 6 }));
  set_short( "Passage - x51y9z6" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z6.c",
  "south" : DIR+"/rooms/x51y8z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
