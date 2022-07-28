inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 4, 9 }));
  set_short( "Hallway - x61y4z9" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y5z9.c",
  "south" : DIR+"/rooms/x61y3z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
