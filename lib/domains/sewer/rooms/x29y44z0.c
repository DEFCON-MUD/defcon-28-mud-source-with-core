inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 0 }));
  set_short( "Hallway - x29y44z0" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z0.c",
  "north" : DIR+"/rooms/x29y45z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
