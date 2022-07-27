inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 7 }));
  set_short( "Corridor - x25y47z7" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z7.c",
  "south" : DIR+"/rooms/x25y46z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
