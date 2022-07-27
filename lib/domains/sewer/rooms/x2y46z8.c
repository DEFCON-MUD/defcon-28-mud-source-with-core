inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 46, 8 }));
  set_short( "Corridor - x2y46z8" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y46z8.c",
  "east" : DIR+"/rooms/x3y46z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
