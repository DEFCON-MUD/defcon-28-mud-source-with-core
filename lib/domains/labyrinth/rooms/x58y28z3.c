inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 28, 3 }));
  set_short( "Hallway - x58y28z3" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y28z3.c",
  "east" : DIR+"/rooms/x59y28z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
