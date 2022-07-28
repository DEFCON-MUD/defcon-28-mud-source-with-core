inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 30, 4 }));
  set_short( "Passage - x61y30z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y30z4.c",
  "north" : DIR+"/rooms/x61y31z4.c",
  "south" : DIR+"/rooms/x61y29z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
