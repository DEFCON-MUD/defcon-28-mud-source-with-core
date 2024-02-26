inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 5, 3 }));
  set_short( "Hallway - x19y5z3" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y6z3.c",
  "south" : DIR+"/rooms/x19y4z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
