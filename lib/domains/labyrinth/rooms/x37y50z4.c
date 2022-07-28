inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 4 }));
  set_short( "Passage - x37y50z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y51z4.c",
  "south" : DIR+"/rooms/x37y49z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
