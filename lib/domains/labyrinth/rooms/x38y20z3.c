inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 20, 3 }));
  set_short( "Corridor - x38y20z3" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y20z3.c",
  "east" : DIR+"/rooms/x39y20z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
