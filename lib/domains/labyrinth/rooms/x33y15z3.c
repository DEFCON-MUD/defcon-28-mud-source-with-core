inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 15, 3 }));
  set_short( "Passage - x33y15z3" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y16z3.c",
  "south" : DIR+"/rooms/x33y14z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
