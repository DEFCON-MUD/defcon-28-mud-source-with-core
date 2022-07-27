inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 60, 7 }));
  set_short( "Passage - x18y60z7" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y60z7.c",
  "east" : DIR+"/rooms/x19y60z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
