inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 33, 1 }));
  set_short( "Corridor - x25y33z1" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y34z1.c",
  "south" : DIR+"/rooms/x25y32z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
