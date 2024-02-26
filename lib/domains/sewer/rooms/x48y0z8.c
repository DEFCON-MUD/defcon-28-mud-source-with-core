inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 8 }));
  set_short( "Corridor - x48y0z8" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z8.c",
  "east" : DIR+"/rooms/x49y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
