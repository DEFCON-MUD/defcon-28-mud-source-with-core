inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 7 }));
  set_short( "Corridor - x42y38z7" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z7.c",
  "east" : DIR+"/rooms/x43y38z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
