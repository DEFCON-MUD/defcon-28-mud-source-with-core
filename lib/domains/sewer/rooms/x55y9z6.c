inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 6 }));
  set_short( "Corridor - x55y9z6" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z6.c",
  "south" : DIR+"/rooms/x55y8z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
