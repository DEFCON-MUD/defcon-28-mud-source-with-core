inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 11, 1 }));
  set_short( "Hallway - x29y11z1" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y12z1.c",
  "south" : DIR+"/rooms/x29y10z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
