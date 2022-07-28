inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 3 }));
  set_short( "Corridor - x45y10z3" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y10z3.c",
  "south" : DIR+"/rooms/x45y9z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
