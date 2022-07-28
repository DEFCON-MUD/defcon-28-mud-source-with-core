inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 3 }));
  set_short( "Passage - x27y38z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z3.c",
  "east" : DIR+"/rooms/x28y38z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
