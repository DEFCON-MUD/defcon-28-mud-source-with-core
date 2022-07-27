inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 7 }));
  set_short( "Passage - x53y64z7" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z7.c",
  "east" : DIR+"/rooms/x54y64z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
