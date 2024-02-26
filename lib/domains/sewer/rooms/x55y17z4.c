inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 17, 4 }));
  set_short( "Corridor - x55y17z4" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y18z4.c",
  "south" : DIR+"/rooms/x55y16z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
