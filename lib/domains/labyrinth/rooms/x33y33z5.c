inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 33, 5 }));
  set_short( "Passage - x33y33z5" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y34z5.c",
  "south" : DIR+"/rooms/x33y32z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
