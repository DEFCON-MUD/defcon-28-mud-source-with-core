inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 3 }));
  set_short( "Corridor - x25y40z3" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y40z3.c",
  "east" : DIR+"/rooms/x26y40z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
