inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 32, 8 }));
  set_short( "Corridor - x30y32z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y32z8.c",
  "east" : DIR+"/rooms/x31y32z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
