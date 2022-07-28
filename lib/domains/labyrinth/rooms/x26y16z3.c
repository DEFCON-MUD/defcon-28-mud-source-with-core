inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 16, 3 }));
  set_short( "Corridor - x26y16z3" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y16z3.c",
  "east" : DIR+"/rooms/x27y16z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
