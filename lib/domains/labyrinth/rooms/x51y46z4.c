inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 4 }));
  set_short( "Passage - x51y46z4" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y46z4.c",
  "north" : DIR+"/rooms/x51y47z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
