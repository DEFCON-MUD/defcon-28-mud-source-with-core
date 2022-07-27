inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 58, 7 }));
  set_short( "Hallway - x3y58z7" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y58z7.c",
  "south" : DIR+"/rooms/x3y57z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
