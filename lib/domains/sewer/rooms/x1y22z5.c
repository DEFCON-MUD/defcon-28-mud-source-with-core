inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 5 }));
  set_short( "Corridor - x1y22z5" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y22z5.c",
  "south" : DIR+"/rooms/x1y21z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
