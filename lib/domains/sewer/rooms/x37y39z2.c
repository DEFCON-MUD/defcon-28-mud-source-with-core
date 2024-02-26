inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 39, 2 }));
  set_short( "Hallway - x37y39z2" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y40z2.c",
  "south" : DIR+"/rooms/x37y38z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
