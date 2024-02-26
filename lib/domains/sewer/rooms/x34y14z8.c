inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 14, 8 }));
  set_short( "Passage - x34y14z8" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y14z8.c",
  "east" : DIR+"/rooms/x35y14z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
