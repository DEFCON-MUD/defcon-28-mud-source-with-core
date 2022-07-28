inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 9, 0 }));
  set_short( "Corridor - x33y9z0" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y10z0.c",
  "south" : DIR+"/rooms/x33y8z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
