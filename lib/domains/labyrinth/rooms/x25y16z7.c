inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 7 }));
  set_short( "Passage - x25y16z7" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y16z7.c",
  "south" : DIR+"/rooms/x25y15z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
