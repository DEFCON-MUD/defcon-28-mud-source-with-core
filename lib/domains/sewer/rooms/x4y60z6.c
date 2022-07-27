inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 6 }));
  set_short( "Passage - x4y60z6" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z6.c",
  "east" : DIR+"/rooms/x5y60z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
