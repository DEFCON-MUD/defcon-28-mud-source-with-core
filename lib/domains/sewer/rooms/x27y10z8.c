inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 10, 8 }));
  set_short( "Corridor - x27y10z8" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y10z8.c",
  "north" : DIR+"/rooms/x27y11z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
