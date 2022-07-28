inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 14, 3 }));
  set_short( "Passage - x24y14z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y14z3.c",
  "east" : DIR+"/rooms/x25y14z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
