inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 8, 2 }));
  set_short( "Passage - x26y8z2" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y8z2.c",
  "east" : DIR+"/rooms/x27y8z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
