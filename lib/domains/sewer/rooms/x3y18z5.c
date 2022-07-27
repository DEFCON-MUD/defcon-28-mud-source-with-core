inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 18, 5 }));
  set_short( "Passage - x3y18z5" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y18z5.c",
  "north" : DIR+"/rooms/x3y19z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
