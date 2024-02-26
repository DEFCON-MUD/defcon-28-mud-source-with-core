inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 1 }));
  set_short( "Passage - x11y8z1" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z1.c",
  "north" : DIR+"/rooms/x11y9z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
