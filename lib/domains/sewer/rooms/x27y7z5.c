inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 5 }));
  set_short( "Passage - x27y7z5" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z5.c",
  "south" : DIR+"/rooms/x27y6z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
