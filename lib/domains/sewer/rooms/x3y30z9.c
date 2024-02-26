inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 9 }));
  set_short( "Passage - x3y30z9" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y31z9.c",
  "south" : DIR+"/rooms/x3y29z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
