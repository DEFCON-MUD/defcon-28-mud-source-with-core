inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 2 }));
  set_short( "Hallway - x27y18z2" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y19z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
