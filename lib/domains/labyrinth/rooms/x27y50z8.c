inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 8 }));
  set_short( "Passage - x27y50z8" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y50z8.c",
  "south" : DIR+"/rooms/x27y49z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
