inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 0 }));
  set_short( "Hallway - x9y41z0" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z0.c",
  "south" : DIR+"/rooms/x9y40z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
