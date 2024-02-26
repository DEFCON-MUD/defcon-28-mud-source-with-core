inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 38, 8 }));
  set_short( "Passage - x30y38z8" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y38z8.c",
  "east" : DIR+"/rooms/x31y38z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
