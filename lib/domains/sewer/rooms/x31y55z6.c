inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 55, 6 }));
  set_short( "Passage - x31y55z6" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y56z6.c",
  "south" : DIR+"/rooms/x31y54z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
