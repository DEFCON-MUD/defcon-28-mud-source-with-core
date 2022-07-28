inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 60, 0 }));
  set_short( "Hallway - x21y60z0" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y60z0.c",
  "south" : DIR+"/rooms/x21y59z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
