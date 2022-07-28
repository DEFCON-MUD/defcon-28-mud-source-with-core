inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 30, 3 }));
  set_short( "Passage - x41y30z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y30z3.c",
  "east" : DIR+"/rooms/x42y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
