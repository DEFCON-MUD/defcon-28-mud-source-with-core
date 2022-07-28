inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 29, 1 }));
  set_short( "Corridor - x25y29z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y30z1.c",
  "south" : DIR+"/rooms/x25y28z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
