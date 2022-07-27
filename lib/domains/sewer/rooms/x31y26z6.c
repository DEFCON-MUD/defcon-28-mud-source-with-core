inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 6 }));
  set_short( "Passage - x31y26z6" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y26z6.c",
  "north" : DIR+"/rooms/x31y27z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
