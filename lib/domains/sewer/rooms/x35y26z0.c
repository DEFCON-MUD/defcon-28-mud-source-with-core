inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 26, 0 }));
  set_short( "Hallway - x35y26z0" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y26z0.c",
  "south" : DIR+"/rooms/x35y25z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
