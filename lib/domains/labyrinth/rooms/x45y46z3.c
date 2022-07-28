inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 3 }));
  set_short( "Hallway - x45y46z3" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y46z3.c",
  "south" : DIR+"/rooms/x45y45z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
