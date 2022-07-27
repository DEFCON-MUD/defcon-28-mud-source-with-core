inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 7 }));
  set_short( "Passage - x1y55z7" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z7.c",
  "south" : DIR+"/rooms/x1y54z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
