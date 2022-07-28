inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 9, 3 }));
  set_short( "Hallway - x23y9z3" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y10z3.c",
  "south" : DIR+"/rooms/x23y8z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
