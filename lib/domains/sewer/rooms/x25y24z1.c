inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 1 }));
  set_short( "Hallway - x25y24z1" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y24z1.c",
  "south" : DIR+"/rooms/x25y23z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
