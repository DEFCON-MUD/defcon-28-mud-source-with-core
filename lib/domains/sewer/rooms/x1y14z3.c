inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 3 }));
  set_short( "Hallway - x1y14z3" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y15z3.c",
  "south" : DIR+"/rooms/x1y13z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
