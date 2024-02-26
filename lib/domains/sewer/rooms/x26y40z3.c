inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 40, 3 }));
  set_short( "Hallway - x26y40z3" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y40z3.c",
  "east" : DIR+"/rooms/x27y40z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
