inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 0 }));
  set_short( "Hallway - x40y64z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z0.c",
  "east" : DIR+"/rooms/x41y64z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
