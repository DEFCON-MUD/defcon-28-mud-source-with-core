inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 4 }));
  set_short( "Passage - x7y4z4" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y4z4.c",
  "north" : DIR+"/rooms/x7y5z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
