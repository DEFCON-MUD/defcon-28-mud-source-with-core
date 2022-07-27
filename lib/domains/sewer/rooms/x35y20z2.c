inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 2 }));
  set_short( "Hallway - x35y20z2" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y20z2.c",
  "north" : DIR+"/rooms/x35y21z2.c",
  "south" : DIR+"/rooms/x35y19z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
