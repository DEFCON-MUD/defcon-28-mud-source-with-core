inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 3 }));
  set_short( "Corridor - x19y11z3" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z3.c",
  "south" : DIR+"/rooms/x19y10z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
