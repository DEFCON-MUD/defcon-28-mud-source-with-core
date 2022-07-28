inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 3 }));
  set_short( "Passage - x61y59z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z3.c",
  "south" : DIR+"/rooms/x61y58z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
