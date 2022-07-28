inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 1 }));
  set_short( "Corridor - x25y32z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y33z1.c",
  "south" : DIR+"/rooms/x25y31z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
