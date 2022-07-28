inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 28, 0 }));
  set_short( "Passage - x7y28z0" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y28z0.c",
  "east" : DIR+"/rooms/x8y28z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
