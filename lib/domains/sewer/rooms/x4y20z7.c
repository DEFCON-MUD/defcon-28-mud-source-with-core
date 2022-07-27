inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 20, 7 }));
  set_short( "Passage - x4y20z7" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y20z7.c",
  "east" : DIR+"/rooms/x5y20z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
