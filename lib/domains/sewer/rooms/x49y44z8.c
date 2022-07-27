inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 8 }));
  set_short( "Passage - x49y44z8" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y44z8.c",
  "north" : DIR+"/rooms/x49y45z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
