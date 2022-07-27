inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 50, 9 }));
  set_short( "Hallway - x30y50z9" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y50z9.c",
  "east" : DIR+"/rooms/x31y50z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
