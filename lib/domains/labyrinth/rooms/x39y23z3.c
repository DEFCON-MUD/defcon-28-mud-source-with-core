inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 23, 3 }));
  set_short( "Passage - x39y23z3" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y24z3.c",
  "south" : DIR+"/rooms/x39y22z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
