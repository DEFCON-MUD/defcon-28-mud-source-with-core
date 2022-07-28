inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 3 }));
  set_short( "Hallway - x42y38z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z3.c",
  "east" : DIR+"/rooms/x43y38z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
