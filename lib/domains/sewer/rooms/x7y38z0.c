inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 38, 0 }));
  set_short( "Passage - x7y38z0" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y39z0.c",
  "south" : DIR+"/rooms/x7y37z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
