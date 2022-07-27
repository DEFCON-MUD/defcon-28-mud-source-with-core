inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 60, 7 }));
  set_short( "Hallway - x42y60z7" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y60z7.c",
  "east" : DIR+"/rooms/x43y60z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
