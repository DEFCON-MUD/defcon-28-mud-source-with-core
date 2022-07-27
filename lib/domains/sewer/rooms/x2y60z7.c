inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 60, 7 }));
  set_short( "Corridor - x2y60z7" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y60z7.c",
  "east" : DIR+"/rooms/x3y60z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
