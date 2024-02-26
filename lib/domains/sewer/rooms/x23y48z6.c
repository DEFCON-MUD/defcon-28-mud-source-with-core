inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 6 }));
  set_short( "Hallway - x23y48z6" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y48z6.c",
  "north" : DIR+"/rooms/x23y49z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
