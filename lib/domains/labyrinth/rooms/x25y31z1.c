inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 31, 1 }));
  set_short( "Passage - x25y31z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y32z1.c",
  "south" : DIR+"/rooms/x25y30z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
