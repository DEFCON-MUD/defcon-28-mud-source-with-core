inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 3 }));
  set_short( "Hallway - x5y17z3" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z3.c",
  "south" : DIR+"/rooms/x5y16z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
