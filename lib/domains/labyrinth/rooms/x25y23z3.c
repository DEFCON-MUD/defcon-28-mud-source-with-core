inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 23, 3 }));
  set_short( "Passage - x25y23z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y24z3.c",
  "south" : DIR+"/rooms/x25y22z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
