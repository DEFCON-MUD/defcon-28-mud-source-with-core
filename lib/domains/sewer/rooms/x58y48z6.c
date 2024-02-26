inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 48, 6 }));
  set_short( "Hallway - x58y48z6" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y48z6.c",
  "east" : DIR+"/rooms/x59y48z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
