inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 5 }));
  set_short( "Corridor - x59y20z5" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y21z5.c",
  "south" : DIR+"/rooms/x59y19z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
