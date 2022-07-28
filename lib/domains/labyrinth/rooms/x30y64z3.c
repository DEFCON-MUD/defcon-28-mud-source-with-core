inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 3 }));
  set_short( "Hallway - x30y64z3" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z3.c",
  "east" : DIR+"/rooms/x31y64z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
