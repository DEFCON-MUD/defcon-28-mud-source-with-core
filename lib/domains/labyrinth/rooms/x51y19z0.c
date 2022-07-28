inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 19, 0 }));
  set_short( "Corridor - x51y19z0" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y20z0.c",
  "south" : DIR+"/rooms/x51y18z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
