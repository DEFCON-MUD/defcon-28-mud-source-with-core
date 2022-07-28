inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 3 }));
  set_short( "Corridor - x3y6z3" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y7z3.c",
  "south" : DIR+"/rooms/x3y5z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
