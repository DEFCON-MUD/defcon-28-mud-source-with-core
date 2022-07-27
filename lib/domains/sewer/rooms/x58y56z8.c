inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 56, 8 }));
  set_short( "Passage - x58y56z8" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y56z8.c",
  "east" : DIR+"/rooms/x59y56z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
