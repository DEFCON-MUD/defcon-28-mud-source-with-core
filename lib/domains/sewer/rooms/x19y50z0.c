inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 0 }));
  set_short( "Passage - x19y50z0" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y50z0.c",
  "east" : DIR+"/rooms/x20y50z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
