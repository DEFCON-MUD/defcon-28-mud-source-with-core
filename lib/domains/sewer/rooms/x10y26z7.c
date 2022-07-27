inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 26, 7 }));
  set_short( "Hallway - x10y26z7" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y26z7.c",
  "east" : DIR+"/rooms/x11y26z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
