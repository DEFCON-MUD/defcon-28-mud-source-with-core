inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 8, 4 }));
  set_short( "Passage - x4y8z4" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y8z4.c",
  "east" : DIR+"/rooms/x5y8z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
