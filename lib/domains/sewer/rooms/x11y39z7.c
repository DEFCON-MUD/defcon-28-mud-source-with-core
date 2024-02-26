inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 39, 7 }));
  set_short( "Hallway - x11y39z7" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y40z7.c",
  "south" : DIR+"/rooms/x11y38z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
