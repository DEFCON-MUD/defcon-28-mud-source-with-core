inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 6 }));
  set_short( "Passage - x5y32z6" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y32z6.c",
  "south" : DIR+"/rooms/x5y31z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
