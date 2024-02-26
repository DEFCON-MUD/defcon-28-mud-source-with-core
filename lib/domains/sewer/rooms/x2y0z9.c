inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 0, 9 }));
  set_short( "Passage - x2y0z9" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y0z9.c",
  "east" : DIR+"/rooms/x3y0z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
