inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 28, 2 }));
  set_short( "Passage - x51y28z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y28z2.c",
  "south" : DIR+"/rooms/x51y27z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
