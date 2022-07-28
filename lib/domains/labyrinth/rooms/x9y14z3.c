inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 14, 3 }));
  set_short( "Hallway - x9y14z3" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y14z3.c",
  "south" : DIR+"/rooms/x9y13z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
