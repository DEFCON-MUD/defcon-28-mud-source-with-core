inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 0 }));
  set_short( "Corridor - x50y0z0" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z0.c",
  "east" : DIR+"/rooms/x51y0z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
