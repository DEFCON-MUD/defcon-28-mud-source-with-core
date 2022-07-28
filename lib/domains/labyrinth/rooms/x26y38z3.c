inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 3 }));
  set_short( "Corridor - x26y38z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z3.c",
  "east" : DIR+"/rooms/x27y38z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
