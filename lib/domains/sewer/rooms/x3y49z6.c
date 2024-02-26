inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 49, 6 }));
  set_short( "Hallway - x3y49z6" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y50z6.c",
  "south" : DIR+"/rooms/x3y48z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
