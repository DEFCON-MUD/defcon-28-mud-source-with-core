inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 3 }));
  set_short( "Corridor - x25y62z3" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y62z3.c",
  "east" : DIR+"/rooms/x26y62z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
