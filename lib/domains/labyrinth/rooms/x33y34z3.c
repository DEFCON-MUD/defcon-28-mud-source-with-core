inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 3 }));
  set_short( "Passage - x33y34z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y35z3.c",
  "south" : DIR+"/rooms/x33y33z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
