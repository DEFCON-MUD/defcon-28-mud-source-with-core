inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 49, 5 }));
  set_short( "Passage - x5y49z5" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y50z5.c",
  "south" : DIR+"/rooms/x5y48z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
