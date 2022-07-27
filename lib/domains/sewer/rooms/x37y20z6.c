inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 6 }));
  set_short( "Hallway - x37y20z6" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y20z6.c",
  "south" : DIR+"/rooms/x37y19z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
