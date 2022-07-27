inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 9 }));
  set_short( "Passage - x27y4z9" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y4z9.c",
  "south" : DIR+"/rooms/x27y3z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
