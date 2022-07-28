inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 50, 3 }));
  set_short( "Passage - x30y50z3" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y50z3.c",
  "east" : DIR+"/rooms/x31y50z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
