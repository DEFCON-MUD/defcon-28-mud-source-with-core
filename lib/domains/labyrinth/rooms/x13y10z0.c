inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 10, 0 }));
  set_short( "Passage - x13y10z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y10z0.c",
  "north" : DIR+"/rooms/x13y11z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
