inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 3 }));
  set_short( "Passage - x39y31z3" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z3.c",
  "south" : DIR+"/rooms/x39y30z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
