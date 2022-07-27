inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 39, 7 }));
  set_short( "Passage - x3y39z7" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y40z7.c",
  "south" : DIR+"/rooms/x3y38z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
