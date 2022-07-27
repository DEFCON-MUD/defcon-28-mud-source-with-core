inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 19, 2 }));
  set_short( "Passage - x31y19z2" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y20z2.c",
  "south" : DIR+"/rooms/x31y18z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
