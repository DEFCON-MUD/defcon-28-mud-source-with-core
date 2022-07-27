inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 0 }));
  set_short( "Corridor - x11y20z0" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y20z0.c",
  "east" : DIR+"/rooms/x12y20z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
