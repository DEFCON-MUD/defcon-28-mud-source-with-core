inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 6 }));
  set_short( "Passage - x51y56z6" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y56z6.c",
  "north" : DIR+"/rooms/x51y57z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
