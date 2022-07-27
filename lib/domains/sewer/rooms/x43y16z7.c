inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 7 }));
  set_short( "Corridor - x43y16z7" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y16z7.c",
  "north" : DIR+"/rooms/x43y17z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
