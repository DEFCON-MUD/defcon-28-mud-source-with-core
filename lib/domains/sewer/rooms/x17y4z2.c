inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 2 }));
  set_short( "Corridor - x17y4z2" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "south" : DIR+"/rooms/x17y3z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
