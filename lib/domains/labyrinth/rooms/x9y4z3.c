inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 3 }));
  set_short( "Corridor - x9y4z3" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y4z3.c",
  "south" : DIR+"/rooms/x9y3z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
