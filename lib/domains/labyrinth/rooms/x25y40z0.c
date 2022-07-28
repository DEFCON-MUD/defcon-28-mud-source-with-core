inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 0 }));
  set_short( "Passage - x25y40z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y41z0.c",
  "south" : DIR+"/rooms/x25y39z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
