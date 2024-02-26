inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 2 }));
  set_short( "Hallway - x53y25z2" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z2.c",
  "south" : DIR+"/rooms/x53y24z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
