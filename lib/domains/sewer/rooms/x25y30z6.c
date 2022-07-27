inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 6 }));
  set_short( "Hallway - x25y30z6" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y31z6.c",
  "south" : DIR+"/rooms/x25y29z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
