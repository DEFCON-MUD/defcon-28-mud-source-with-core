inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 4 }));
  set_short( "Passage - x9y30z4" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y30z4.c",
  "east" : DIR+"/rooms/x10y30z4.c",
  "north" : DIR+"/rooms/x9y31z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
