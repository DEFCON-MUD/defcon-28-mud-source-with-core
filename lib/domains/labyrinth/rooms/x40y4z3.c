inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 4, 3 }));
  set_short( "Corridor - x40y4z3" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y4z3.c",
  "east" : DIR+"/rooms/x41y4z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
