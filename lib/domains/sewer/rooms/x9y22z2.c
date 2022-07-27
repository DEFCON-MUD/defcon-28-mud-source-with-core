inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 2 }));
  set_short( "Passage - x9y22z2" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y22z2.c",
  "north" : DIR+"/rooms/x9y23z2.c",
  "south" : DIR+"/rooms/x9y21z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
