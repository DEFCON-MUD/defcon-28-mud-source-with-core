inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 0 }));
  set_short( "Hallway - x1y2z0" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y3z0.c",
  "south" : DIR+"/rooms/x1y1z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
