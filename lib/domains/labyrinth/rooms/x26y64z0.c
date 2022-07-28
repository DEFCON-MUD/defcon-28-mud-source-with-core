inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 64, 0 }));
  set_short( "Corridor - x26y64z0" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y64z0.c",
  "east" : DIR+"/rooms/x27y64z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
