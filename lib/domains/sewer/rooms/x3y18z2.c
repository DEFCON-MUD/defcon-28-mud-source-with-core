inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 18, 2 }));
  set_short( "Hallway - x3y18z2" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y18z2.c",
  "north" : DIR+"/rooms/x3y19z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
