inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 5, 3 }));
  set_short( "Passage - x23y5z3" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y6z3.c",
  "south" : DIR+"/rooms/x23y4z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
