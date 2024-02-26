inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 5 }));
  set_short( "Passage - x11y37z5" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z5.c",
  "south" : DIR+"/rooms/x11y36z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
