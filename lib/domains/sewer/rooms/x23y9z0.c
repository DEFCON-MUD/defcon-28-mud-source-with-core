inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 9, 0 }));
  set_short( "Corridor - x23y9z0" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y10z0.c",
  "south" : DIR+"/rooms/x23y8z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
