inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 21, 8 }));
  set_short( "Corridor - x11y21z8" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y22z8.c",
  "south" : DIR+"/rooms/x11y20z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
