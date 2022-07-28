inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 55, 3 }));
  set_short( "Passage - x45y55z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y56z3.c",
  "south" : DIR+"/rooms/x45y54z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
