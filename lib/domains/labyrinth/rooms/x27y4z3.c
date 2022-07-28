inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 3 }));
  set_short( "Hallway - x27y4z3" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y4z3.c",
  "north" : DIR+"/rooms/x27y5z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
