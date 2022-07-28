inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 31, 6 }));
  set_short( "Corridor - x25y31z6" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y32z6.c",
  "south" : DIR+"/rooms/x25y30z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
