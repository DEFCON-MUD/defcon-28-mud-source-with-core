inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 29, 3 }));
  set_short( "Hallway - x33y29z3" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y30z3.c",
  "south" : DIR+"/rooms/x33y28z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
