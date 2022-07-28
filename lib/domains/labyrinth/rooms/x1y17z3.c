inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 3 }));
  set_short( "Passage - x1y17z3" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z3.c",
  "south" : DIR+"/rooms/x1y16z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
