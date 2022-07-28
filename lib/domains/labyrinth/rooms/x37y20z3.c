inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 3 }));
  set_short( "Corridor - x37y20z3" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y20z3.c",
  "north" : DIR+"/rooms/x37y21z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
