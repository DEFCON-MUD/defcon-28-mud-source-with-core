inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 3 }));
  set_short( "Hallway - x25y4z3" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y4z3.c",
  "north" : DIR+"/rooms/x25y5z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
