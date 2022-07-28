inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 3 }));
  set_short( "Passage - x29y34z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y35z3.c",
  "south" : DIR+"/rooms/x29y33z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
