inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 33, 7 }));
  set_short( "Corridor - x9y33z7" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y34z7.c",
  "south" : DIR+"/rooms/x9y32z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
