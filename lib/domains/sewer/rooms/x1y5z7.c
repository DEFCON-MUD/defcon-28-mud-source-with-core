inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 7 }));
  set_short( "Corridor - x1y5z7" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z7.c",
  "south" : DIR+"/rooms/x1y4z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
