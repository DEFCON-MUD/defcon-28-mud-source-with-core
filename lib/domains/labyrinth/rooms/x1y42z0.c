inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 0 }));
  set_short( "Corridor - x1y42z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z0.c",
  "south" : DIR+"/rooms/x1y41z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
