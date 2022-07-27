inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 10, 4 }));
  set_short( "Corridor - x3y10z4" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y10z4.c",
  "north" : DIR+"/rooms/x3y11z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
