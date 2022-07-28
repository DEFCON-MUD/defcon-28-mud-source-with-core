inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 29, 0 }));
  set_short( "Passage - x25y29z0" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y30z0.c",
  "south" : DIR+"/rooms/x25y28z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
