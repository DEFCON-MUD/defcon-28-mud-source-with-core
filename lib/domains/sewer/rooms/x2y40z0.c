inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 40, 0 }));
  set_short( "Passage - x2y40z0" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y40z0.c",
  "east" : DIR+"/rooms/x3y40z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
