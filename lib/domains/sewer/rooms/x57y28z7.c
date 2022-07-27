inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 7 }));
  set_short( "Passage - x57y28z7" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y28z7.c",
  "north" : DIR+"/rooms/x57y29z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
