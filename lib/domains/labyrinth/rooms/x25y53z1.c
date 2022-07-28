inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 53, 1 }));
  set_short( "Corridor - x25y53z1" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y54z1.c",
  "south" : DIR+"/rooms/x25y52z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
