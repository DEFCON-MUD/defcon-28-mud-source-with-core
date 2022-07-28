inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 58, 6 }));
  set_short( "Passage - x51y58z6" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y58z6.c",
  "south" : DIR+"/rooms/x51y57z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
